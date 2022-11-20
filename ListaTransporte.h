//
// Created by Johan on 18/11/2022.
//

#ifndef PROYECTO2_SLN_LISTATRANSPORTE_H
#define PROYECTO2_SLN_LISTATRANSPORTE_H

#pragma once
#include <iostream>
#include <sstream>
#include "NodoTransporte.h"
#include "Transporte.h"

using namespace std;

class ListaTransporte
{
private:
    NodoTransporte* primero;
    NodoTransporte* actual;
public:
    ListaTransporte();
    void insertarTransporte(Transporte*);
    bool eliminarTransporte(string);
    string toString();
    bool listaVacia();
    bool existeVehiculo(string);
    bool editar(string, int, string);
    ~ListaTransporte();
    int cuentaNodos();
    Transporte* getVehiculo(string id);
};


#endif //PROYECTO2_SLN_LISTATRANSPORTE_H
