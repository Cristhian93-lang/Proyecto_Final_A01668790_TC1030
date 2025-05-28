#ifndef CLIENTE_H
#define CLIENTE_H
#include "Persona.h"
#include <string>
using namespace std;

class Cliente : public Persona {
private:
    string correo;
    string telefono;
    string contrasena;

public:
    Cliente(string nombre, int id, string correo, string telefono, string contrasena);
    void mostrarDatos() const override;
    void realizarTarea() const override;
    string getCorreo() const;
    string getTelefono() const;
    bool verificarContrasena(string pass) const;
};

#endif
