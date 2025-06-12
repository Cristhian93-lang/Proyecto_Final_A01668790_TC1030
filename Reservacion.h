/*
 * Proyecto Plataforma de Pedidos y Reservaciones
 * Cristhian Viery Maida Suarez
 * A01668790
 * Esta clase define el objeto Reservacion, que representa una cita
 * programada en un restaurante. Incluye los datos del cliente,
 * empleado asignado, numero de personas, mesa, hora y metodo de pago.
 */

#ifndef RESERVACION_H
#define RESERVACION_H

#include "Cliente.h"
#include "Empleado.h"
#include <string>
#include <iostream>
using namespace std;

// Declaracion de la clase Reservacion
class Reservacion {
    private:
        Cliente* cliente;        
        Empleado* empleado;      
        string restaurante;      
        int personas;            
        int mesa;                
        string hora;             
        string metodoPago;       

    public:
        Reservacion(Cliente* cliente, Empleado* empleado, string restaurante,
                    int personas, int mesa, string hora);

        float calcularCosto() const;
        void setMetodoPago(string metodo);
        void generarFactura() const;
};

/**
 * Constructor Reservacion
 *
 * Inicializa los atributos con los datos del cliente, empleado,
 * restaurante, personas, mesa y hora. El metodo de pago queda pendiente.
 *
 * @param cliente apuntador al cliente
 * @param empleado apuntador al empleado asignado
 * @param restaurante nombre del restaurante
 * @param personas cantidad de personas
 * @param mesa numero de mesa
 * @param hora hora de la reservacion
 * @return
 */
Reservacion::Reservacion(Cliente* cliente, Empleado* empleado,
                         string restaurante, int personas,
                         int mesa, string hora)
    : cliente(cliente), empleado(empleado),
      restaurante(restaurante), personas(personas),
      mesa(mesa), hora(hora),
      metodoPago("No especificado") {}

/**
 * calcularCosto calcula el total a pagar por la reservacion
 *
 * Multiplica el numero de personas por una tarifa fija de $30.
 *
 * @param
 * @return float con el costo total
 */
float Reservacion::calcularCosto() const {
    return personas * 30.0f;
}

/**
 * setMetodoPago asigna el metodo de pago de la reservacion
 *
 * Guarda si el cliente pago con efectivo o tarjeta.
 *
 * @param metodo texto con el tipo de pago
 * @return
 */
void Reservacion::setMetodoPago(string metodo) {
    metodoPago = metodo;
}

/**
 * generarFactura imprime todos los datos de la reservacion
 *
 * Muestra cliente, direccion, restaurante, hora, mesa,
 * empleado asignado, metodo de pago y costo total.
 *
 * @param
 * @return
 */
void Reservacion::generarFactura() const {
    cout << "\n--- FACTURA DE RESERVACION ---" << endl;
    cout << "Cliente: " << cliente->getNombre() << endl;
    cout << "Direccion: " << cliente->getDireccion() << endl;
    cout << "Restaurante: " << restaurante << endl;
    cout << "Hora: " << hora << endl;

    cout << "Mesa: ";
    if (mesa >= 0)
        cout << mesa;
    else
        cout << "No asignada";
    cout << ", Personas: " << personas << endl;

    if (empleado)
        cout << "Empleado asignado: " << empleado->getNombre()
             << " - " << empleado->getRol() << endl;
    else
        cout << "Empleado asignado: No asignado" << endl;

    cout << "Metodo de pago: " << metodoPago << endl;
    cout << "Costo total: $" << calcularCosto() << endl;
    cout << "-------------------------------\n" << endl;
}

#endif
