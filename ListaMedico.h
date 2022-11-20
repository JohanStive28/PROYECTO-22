//
// Created by Johan on 18/11/2022.
//

#ifndef PROYECTO2_SLN_LISTAMEDICO_H
#define PROYECTO2_SLN_LISTAMEDICO_H

#pragma once
#include <iostream>
#include <sstream>
#include "NodoMedico.h"
#include "Medico.h"

using namespace std;

class ListaMedico
{
private:
    NodoMedico* primero;
    NodoMedico* actual;
public:
    ListaMedico();
    void insertarMedico(Medico*);
    bool eliminarMedico(string);
    string toString();
    bool listaVacia();
    ~ListaMedico();
    bool existeMedico(string);
    int cuentaNodos();
    Medico* MedicoEspecifico(string id);
    void editarMedico(string, int, string);
};


#endif //PROYECTO2_SLN_LISTAMEDICO_H
