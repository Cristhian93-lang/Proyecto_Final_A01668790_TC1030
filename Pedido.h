#ifndef PEDIDO_H
#define PEDIDO_H
#include "Plato.h"
#include "Cliente.h"
#include <vector>
using namespace std;

class Pedido {
private:
    Cliente cliente;
    vector<Plato> platosSolicitados;
    float total;

public:
    Pedido(Cliente cliente);
    void agregarPlato(const Plato& p);
    float calcularTotal() const;
    void generarFactura() const;
};

#endif


