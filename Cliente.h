/*
 * Proyecto Plataforma de Pedidos y Reservaciones
 * Cristhian Viery Maida Suarez
 * A01668790
 * Esta clase define el objeto Cliente, que representa a un usuario
 * del sistema que realiza pedidos o reservaciones. Hereda de la clase
 * abstracta Persona e incluye atributos como correo y contrasena,
 * ademas de metodos para mostrar su informacion y autenticar.
 */

#ifndef CLIENTE_H
#define CLIENTE_H
#include "Persona.h"

// Declaracion de la clase Cliente, hereda de Persona
class Cliente : public Persona {
    private:
        string correo;      
        string contrasena;   

    public:
        // Constructor con parametros
        Cliente(string nombre, int id, string correo,
                string telefono, string direccion,
                string contrasena);

        void mostrarDatos() const;
        void realizarTarea() const;

        string getCorreo() const;
        string getContrasena() const;
};

/**
 * Constructor Cliente
 *
 * Inicializa los atributos heredados de Persona, y ademas
 * asigna el correo y contrasena correspondientes al cliente.
 *
 * @param nombre nombre del cliente
 * @param id identificador unico del cliente
 * @param correo correo electronico
 * @param telefono numero telefonico
 * @param direccion direccion de domicilio
 * @param contrasena clave de acceso del cliente
 * @return
 */
Cliente::Cliente(string nombre, int id, string correo,
                 string telefono, string direccion,
                 string contrasena)
    : Persona(nombre, id, telefono, direccion),
      correo(correo), contrasena(contrasena) {}

/**
 * mostrarDatos imprime todos los datos del cliente
 *
 * Muestra por pantalla el nombre, ID, correo, telefono y direccion
 * del cliente usando los atributos heredados de Persona.
 *
 * @param
 * @return
 */
void Cliente::mostrarDatos() const {
    cout << "Cliente: " << nombre << ", ID: " << id
         << ", Correo: " << correo << ", Tel: " << telefono
         << ", Direccion: " << direccion << endl;
}

/**
 * realizarTarea muestra un mensaje representando
 * una accion generica realizada por el cliente.
 *
 * @param
 * @return
 */
void Cliente::realizarTarea() const {
    cout << "Cliente realizando accion..." << endl;
}

/**
 * getCorreo regresa el valor almacenado en el atributo correo
 *
 * Permite acceder al correo electronico del cliente.
 *
 * @param
 * @return string con el correo
 */
string Cliente::getCorreo() const {
    return correo;
}

/**
 * getContrasena regresa la contrasena del cliente
 *
 * Permite verificar o validar autenticacion mediante este metodo.
 *
 * @param
 * @return string con la contrasena
 */
string Cliente::getContrasena() const {
    return contrasena;
}

#endif

