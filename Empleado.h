#ifndef EMPLEADO_H
#define EMPLEADO_H
#include "Persona.h"
#include <string>
using namespace std;

class Empleado : public Persona {
private:
    string rol;

public:
    Empleado(string nombre, int id, string rol);
    virtual void mostrarDatos() const;
    virtual void realizarTarea() const;
};

#endif


