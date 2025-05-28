#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#include "Menu.h"
#include "Empleado.h"
#include "Pedido.h"
#include <vector>
#include <map>
#include <string>
using namespace std;

class Restaurante {
private:
    string nombre;
    Menu menu;
    vector<Empleado> empleados;
    vector<Pedido> pedidos;
    map<string, int> reservaciones;

public:
    Restaurante(string nombre);
    string getNombre() const;
    void agregarEmpleado(const Empleado& e);
    void asignarEmpleado() const;
    void agregarPlatoAlMenu(const Plato& p);
    void tomarPedido(const Pedido& p);
    void mostrarMenu() const;
    void realizarReservacion(string nombreCliente, int cantidad);
};

#endif
