/*
 * Proyecto Plataforma de Pedidos y Reservaciones
 * Cristhian Viery Maida Suarez
 * A01668790
 * Esta clase define el objeto Empleado, que representa a un trabajador
 * del restaurante. Hereda de la clase abstracta Persona e incluye el
 * atributo adicional 'rol' para definir su funcion.
 * Permite mostrar su informacion y describir su actividad.
 */

#ifndef EMPLEADO_H
#define EMPLEADO_H
#include "Persona.h"

// Declaracion de la clase Empleado, hereda de Persona
class Empleado : public Persona {
    private:
        string rol;  

    public:
        Empleado(string nombre, int id, string telefono,
                string direccion, string rol);

        void mostrarDatos() const;
        void realizarTarea() const;
        string getRol() const;
};

/**
 * Constructor Empleado
 *
 * Inicializa los atributos de Persona y agrega el rol especifico
 * del empleado, como puede ser mesero, cocinero, etc.
 *
 * @param nombre nombre del empleado
 * @param id identificador unico
 * @param telefono numero de contacto
 * @param direccion lugar de residencia
 * @param rol funcion que cumple dentro del restaurante
 * @return
 */
Empleado::Empleado(string nombre, int id, string telefono,
                   string direccion, string rol)
    : Persona(nombre, id, telefono, direccion), rol(rol) {}

/**
 * mostrarDatos imprime todos los datos del empleado
 *
 * Muestra en consola el nombre, ID, telefono, direccion y rol
 * que cumple el empleado dentro del restaurante.
 *
 * @param
 * @return
 */
void Empleado::mostrarDatos() const {
    cout << "Empleado: " << nombre << ", ID: " << id
         << ", Tel: " << telefono << ", Direccion: " << direccion
         << ", Rol: " << rol << endl;
}

/**
 * realizarTarea muestra un mensaje que describe
 * la funcion que esta desempeñando el empleado.
 *
 * @param
 * @return
 */
void Empleado::realizarTarea() const {
    cout << "Empleado en funcion: " << rol << endl;
}

/**
 * getRol regresa el rol del empleado
 *
 * Permite acceder al rol actual que tiene asignado.
 *
 * @param
 * @return string con el rol
 */
string Empleado::getRol() const {
    return rol;
}

#endif

