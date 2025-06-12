/*
 * Proyecto Plataforma de Pedidos y Reservaciones
 * Cristhian Viery Maida Suarez
 * A01668790
 * Esta clase define el objeto Pedido, que representa una orden de
 * comida hecha por un cliente. Contiene una lista de platos, la hora
 * de entrega, el restaurante y el metodo de pago.
 */

#ifndef PEDIDO_H
#define PEDIDO_H
#define MAX 100

#include "Plato.h"
#include "Cliente.h"
#include <string>
#include <iostream>
using namespace std;

// Declaracion de la clase Pedido
class Pedido {
    private:
        Cliente* cliente;                   
        Plato platosSolicitados[MAX];      
        int numPlatos;                     
        string horaEntrega;               
        string nombreRestaurante;          
        string metodoPago;                 

    public:
        Pedido(Cliente* cliente, string horaEntrega, string nombreRestaurante);

        void agregarPlato(const Plato& p);
        void agregarPlato(const string& nombre, float precio);

        float calcularTotal() const;
        void setMetodoPago(string metodo);
        void generarFactura() const;
};

/**
 * Constructor Pedido
 *
 * Inicializa el pedido con cliente, hora de entrega y restaurante.
 * Se inicia sin platos y el metodo de pago por defecto.
 *
 * @param cliente apuntador al cliente que ordena
 * @param horaEntrega hora programada de entrega
 * @param nombreRestaurante nombre del restaurante elegido
 * @return
 */
Pedido::Pedido(Cliente* cliente, string horaEntrega,
               string nombreRestaurante)
    : cliente(cliente), horaEntrega(horaEntrega),
      nombreRestaurante(nombreRestaurante),
      numPlatos(0), metodoPago("No especificado") {}

/**
 * agregarPlato agrega un plato al pedido
 *
 * Recibe un objeto Plato y lo añade al arreglo si hay espacio.
 *
 * @param p objeto Plato a agregar
 * @return
 */
void Pedido::agregarPlato(const Plato& p) {
    if (numPlatos < MAX) {
        platosSolicitados[numPlatos++] = p;
    }
}

/**
 * agregarPlato crea un nuevo plato y lo agrega al pedido
 *
 * Usa nombre y precio para construir un Plato disponible.
 *
 * @param nombre nombre del plato
 * @param precio precio del plato
 * @return
 */
void Pedido::agregarPlato(const string& nombre, float precio) {
    if (numPlatos < MAX) {
        Plato nuevo(nombre, precio, true);
        platosSolicitados[numPlatos++] = nuevo;
    }
}

/**
 * calcularTotal suma el costo de todos los platos del pedido
 *
 * Recorre el arreglo de platos solicitados acumulando sus precios.
 *
 * @param
 * @return float con el total del pedido
 */
float Pedido::calcularTotal() const {
    float suma = 0.0f;
    for (int i = 0; i < numPlatos; ++i)
        suma += platosSolicitados[i].getPrecio();
    return suma;
}

/**
 * setMetodoPago asigna el metodo de pago del pedido
 *
 * Guarda la forma de pago como texto (efectivo o tarjeta).
 *
 * @param metodo descripcion del metodo de pago
 * @return
 */
void Pedido::setMetodoPago(string metodo) {
    metodoPago = metodo;
}

/**
 * generarFactura imprime un resumen detallado del pedido
 *
 * Muestra datos del cliente, restaurante, platos y total a pagar.
 *
 * @param
 * @return
 */
void Pedido::generarFactura() const {
    cout << "\n\n------ FACTURA DE PEDIDO ------\n";
    cout << "Cliente: " << cliente->getNombre() << endl;
    cout << "Direccion: " << cliente->getDireccion() << endl;
    cout << "Restaurante: " << nombreRestaurante << endl;
    cout << "Hora de entrega: " << horaEntrega << endl;
    cout << "Metodo de pago: " << metodoPago << endl;
    cout << "Platos:\n";

    for (int i = 0; i < numPlatos; ++i) {
        cout << "  - " << platosSolicitados[i].getNombre()
             << ": $" << platosSolicitados[i].getPrecio() << endl;
    }

    cout << "Total a pagar: $" << calcularTotal() << endl;
    cout << "-------------------------------\n\n";
}

#endif
