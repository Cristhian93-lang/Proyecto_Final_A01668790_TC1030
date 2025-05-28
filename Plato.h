#ifndef PLATO_H
#define PLATO_H
#include <string>
using namespace std;

class Plato {
private:
    string nombre;
    float precio;
    bool disponible;

public:
    Plato(string nombre, float precio, bool disponible);
    string getNombre() const;
    float getPrecio() const;
    bool estaDisponible() const;
    void mostrarPlato() const;
};

#endif
