/*
 * Proyecto Plataforma de Pedidos y Reservaciones
 * Cristhian Viery Maida Suarez
 * A01668790
 * Esta clase define el objeto Plato, que representa un alimento
 * disponible en el menu de un restaurante. Cada plato tiene nombre,
 * precio y un indicador de disponibilidad.
 */

#ifndef PLATO_H
#define PLATO_H

#include <string>
#include <iostream>
using namespace std;

// Declaracion de la clase Plato
class Plato {
    private:
        string nombre;     
        float precio;      
        bool disponible;   

    public:
        Plato(); 
        Plato(string nombre, float precio, bool disponible);

        string getNombre() const;
        float getPrecio() const;
        bool estaDisponible() const;
        void mostrarPlato() const;
};

/**
 * Constructor por defecto
 *
 * Crea un plato sin nombre, con precio cero y no disponible.
 *
 * @param
 * @return
 */
Plato::Plato()
    : nombre(""), precio(0.0), disponible(false) {}

/**
 * Constructor con parametros
 *
 * Permite inicializar un plato con nombre, precio y disponibilidad.
 *
 * @param nombre nombre del plato
 * @param precio precio del plato
 * @param disponible true si esta disponible, false si no
 * @return
 */
Plato::Plato(string nombre, float precio, bool disponible)
    : nombre(nombre), precio(precio), disponible(disponible) {}

/**
 * getNombre regresa el nombre del plato
 *
 * Permite acceder al nombre del platillo.
 *
 * @param
 * @return string con el nombre
 */
string Plato::getNombre() const {
    return nombre;
}

/**
 * getPrecio regresa el precio del plato
 *
 * Permite conocer el costo asignado al platillo.
 *
 * @param
 * @return float con el precio
 */
float Plato::getPrecio() const {
    return precio;
}

/**
 * estaDisponible verifica si el plato esta en existencia
 *
 * Indica si el platillo puede ser solicitado por el cliente.
 *
 * @param
 * @return true si esta disponible, false si no
 */
bool Plato::estaDisponible() const {
    return disponible;
}

/**
 * mostrarPlato imprime los detalles del plato
 *
 * Muestra el nombre, precio y si esta disponible o no.
 *
 * @param
 * @return
 */
void Plato::mostrarPlato() const {
    cout << nombre << " - $" << precio;
    if (disponible) {
        cout << " (Disponible)" << endl;
    } else {
        cout << " (No disponible)" << endl;
    }
}

#endif
