/*
 * Proyecto Plataforma de Pedidos y Reservaciones
 * Cristhian Viery Maida Suarez
 * A01668790
 * Esta clase define el objeto abstracto Persona, que representa una
 * entidad comun entre clientes y empleados. Incluye atributos como
 * nombre, ID, telefono y direccion. Contiene metodos virtuales puros
 * que deben implementarse en clases derivadas.
 */

#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>
using namespace std;

// Declaracion de la clase abstracta Persona
class Persona {
    protected:
        string nombre;    
        int id;            
        string telefono;   
        string direccion;  

    public:
        Persona(string nombre, int id,
                string telefono, string direccion);

        virtual ~Persona();

        virtual void mostrarDatos() const = 0;
        virtual void realizarTarea() const = 0;

        string getNombre() const;
        string getTelefono() const;
        string getDireccion() const;
};

/**
 * Constructor Persona
 *
 * Inicializa los atributos comunes que comparten todas las personas.
 *
 * @param nombre nombre de la persona
 * @param id identificador unico
 * @param telefono numero telefonico
 * @param direccion domicilio de la persona
 * @return
 */
Persona::Persona(string nombre, int id,
                 string telefono, string direccion)
    : nombre(nombre), id(id),
      telefono(telefono), direccion(direccion) {}

/**
 * Destructor virtual de Persona
 *
 * Se define vacio ya que la clase es abstracta y sirve
 * como base para otras clases.
 *
 * @param
 * @return
 */
Persona::~Persona() {}

/**
 * getNombre regresa el nombre almacenado
 *
 * Permite acceder al nombre de la persona.
 *
 * @param
 * @return string con el nombre
 */
string Persona::getNombre() const {
    return nombre;
}

/**
 * getTelefono regresa el numero telefonico
 *
 * Permite consultar el telefono de la persona.
 *
 * @param
 * @return string con el telefono
 */
string Persona::getTelefono() const {
    return telefono;
}

/**
 * getDireccion regresa la direccion de la persona
 *
 * Permite acceder al domicilio asociado a la persona.
 *
 * @param
 * @return string con la direccion
 */
string Persona::getDireccion() const {
    return direccion;
}

#endif
