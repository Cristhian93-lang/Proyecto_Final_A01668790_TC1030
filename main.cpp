#include "Persona.h"
#include "Empleado.h"
#include "Cliente.h"
#include "Plato.h"
#include "Menu.h"
#include "Pedido.h"
#include "Restaurante.h"
#include <iostream>
using namespace std;

int main() {

    Restaurante rest("Sabor Local");
    cout << "Bienvenido a " << rest.getNombre() << "!" << endl;

    Empleado emp1("Luis", 101, "Chef");
    Empleado emp2("María", 102, "Mesera");
    rest.agregarEmpleado(emp1);
    rest.agregarEmpleado(emp2);
    rest.asignarEmpleado();

    Plato p1("Tacos", 80.0, true);
    Plato p2("Enchiladas", 90.0, true);
    Plato p3("Pozole", 100.0, false); 
    rest.agregarPlatoAlMenu(p1);
    rest.agregarPlatoAlMenu(p2);
    rest.agregarPlatoAlMenu(p3);

    rest.mostrarMenu();
    Cliente cli("Ana", 202, "ana@mail.com", "555-1234", "1234");
    Pedido pedido(cli);
    pedido.agregarPlato(p1);
    pedido.agregarPlato(p2);
    rest.tomarPedido(pedido);

    pedido.generarFactura();
    rest.realizarReservacion("Ana", 3);
    Persona* personas[] = { &emp1, &cli };
    for (Persona* p : personas) {
        p->realizarTarea();
    }

    return 0;
}