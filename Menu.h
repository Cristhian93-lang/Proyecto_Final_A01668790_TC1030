#ifndef MENU_H
#define MENU_H
#include "Plato.h"
#include <vector>
#include <string>
using namespace std;

class Menu {
private:
    vector<Plato> listaPlatos;

public:
    void agregarPlato(const Plato& p);
    void mostrarMenu() const;
    Plato buscarPlato(const string& nombre) const;
};

#endif
