/*
 * Proyecto Plataforma de Pedidos y Reservaciones
 * Cristhian Viery Maida Suarez
 * A01668790
 * Esta clase define el objeto Restaurante, que contiene un menu
 * de platos y una lista de empleados disponibles. Permite gestionar
 * tanto platos como empleados mediante metodos de insercion y consulta.
 */

#ifndef RESTAURANTE_H
#define RESTAURANTE_H

#define MAX 100
#include "Plato.h"
#include "Empleado.h"
#include <string>
#include <iostream>
using namespace std;

// Declaracion de la clase Restaurante
class Restaurante {
    private:
        string nombre;                 
        Plato platos[MAX];             
        int numPlatos;                
        Empleado* empleados[MAX];     
        int numEmpleados;             

    public:
        Restaurante(string nombre);

        string getNombre() const;
        void agregarEmpleado(Empleado* e);
        Empleado* getEmpleado(int index) const;
        int sizeEmpleados() const;
        Empleado** getEmpleados();

        void agregarPlato(const Plato& p);
        void mostrarMenu() const;
        const Plato* getPlatos() const;
        int sizePlatos() const;
};

/**
 * Constructor Restaurante
 *
 * Inicializa el restaurante con su nombre y contadores en cero
 * para empleados y platos.
 *
 * @param nombre nombre del restaurante
 * @return
 */
Restaurante::Restaurante(string nombre)
    : nombre(nombre), numPlatos(0), numEmpleados(0) {}

/**
 * getNombre regresa el nombre del restaurante
 *
 * @param
 * @return string con el nombre
 */
string Restaurante::getNombre() const {
    return nombre;
}

/**
 * agregarEmpleado agrega un empleado al arreglo
 *
 * Inserta el empleado si el limite no ha sido alcanzado.
 *
 * @param e apuntador al objeto Empleado a agregar
 * @return
 */
void Restaurante::agregarEmpleado(Empleado* e) {
    if (numEmpleados < MAX) {
        empleados[numEmpleados++] = e;
    }
}

/**
 * getEmpleado obtiene el empleado en cierta posicion
 *
 * Si el indice esta en el rango valido, retorna el apuntador.
 *
 * @param index posicion del empleado a consultar
 * @return apuntador al empleado o nullptr si es invalido
 */
Empleado* Restaurante::getEmpleado(int index) const {
    if (index >= 0 && index < numEmpleados)
        return empleados[index];
    return nullptr;
}

/**
 * sizeEmpleados regresa la cantidad de empleados registrados
 *
 * @param
 * @return entero con la cantidad de empleados
 */
int Restaurante::sizeEmpleados() const {
    return numEmpleados;
}

/**
 * getEmpleados regresa el arreglo de empleados
 *
 * Permite acceder al arreglo para recorrerlo externamente.
 *
 * @param
 * @return apuntador al arreglo de Empleado*
 */
Empleado** Restaurante::getEmpleados() {
    return empleados;
}

/**
 * agregarPlato agrega un plato al menu del restaurante
 *
 * Inserta el plato si no se ha alcanzado el limite MAX.
 *
 * @param p objeto Plato a insertar
 * @return
 */
void Restaurante::agregarPlato(const Plato& p) {
    if (numPlatos < MAX) {
        platos[numPlatos++] = p;
    }
}

/**
 * mostrarMenu imprime todos los platos registrados
 *
 * Muestra el menu completo con nombre, precio y disponibilidad.
 * Si no hay platos, muestra mensaje de menu vacio.
 *
 * @param
 * @return
 */
void Restaurante::mostrarMenu() const {
    if (numPlatos == 0) {
        cout << "El menu esta vacio." << endl;
        return;
    }

    cout << "------ MENU ------" << endl;
    for (int i = 0; i < numPlatos; ++i) {
        cout << i + 1 << ". ";
        platos[i].mostrarPlato();
    }
}

/**
 * getPlatos regresa el arreglo de platos
 *
 * Permite acceder a los platos del restaurante.
 *
 * @param
 * @return apuntador constante al arreglo de platos
 */
const Plato* Restaurante::getPlatos() const {
    return platos;
}

/**
 * sizePlatos regresa la cantidad de platos en el menu
 *
 * @param
 * @return entero con el numero de platos
 */
int Restaurante::sizePlatos() const {
    return numPlatos;
}

#endif
