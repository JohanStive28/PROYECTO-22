//
// Created by Johan on 18/11/2022.
//

#ifndef PROYECTO2_SLN_NODOMEDICO_H
#define PROYECTO2_SLN_NODOMEDICO_H

#pragma once
#include <iostream>
#include <sstream>
#include "Medico.h"

using namespace std;

class NodoMedico
{
private:
    Medico* medico;
    NodoMedico* sig;
public:
    NodoMedico(Medico*, NodoMedico*);
    ~NodoMedico();
    void setMedico(Medico*);
    Medico* getMedico();
    void setSig(NodoMedico*);
    NodoMedico* getSig();
    string toStringNodo();
};


#endif //PROYECTO2_SLN_NODOMEDICO_H
