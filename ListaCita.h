//
// Created by Johan on 18/11/2022.
//

#ifndef PROYECTO2_SLN_LISTACITA_H
#define PROYECTO2_SLN_LISTACITA_H

#pragma once
#include <iostream>
#include <sstream>
#include "NodoCita.h"
#include "Cita.h"

using namespace std;

class ListaCita
{
private:
    NodoCita* primero;
    NodoCita* actual;
public:
    ListaCita();
    void insertarCita(Cita*);
    bool cancelarCita(string);
    int cuentaNodos();
    bool existeCita(string cod);
    bool eliminar();
    string toString();
    string toStringCitas(string);
    bool listaVacia();
    Cita* getCita(string);
    ~ListaCita();
};


#endif //PROYECTO2_SLN_LISTACITA_H
