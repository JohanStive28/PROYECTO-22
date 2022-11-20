//
// Created by Johan on 18/11/2022.
//

#ifndef PROYECTO2_SLN_NODOTRANSPORTE_H
#define PROYECTO2_SLN_NODOTRANSPORTE_H

#pragma once
#include <iostream>
#include <sstream>
#include "Transporte.h"

using namespace std;

class NodoTransporte
{
private:
    Transporte* transporte;
    NodoTransporte* sig;
public:
    NodoTransporte(Transporte*, NodoTransporte*);
    ~NodoTransporte();
    void setTransporte(Transporte*);
    Transporte* getTransporte();
    void setSig(NodoTransporte*);
    NodoTransporte* getSig();
    string toStringNodo();
};

#endif //PROYECTO2_SLN_NODOTRANSPORTE_H
