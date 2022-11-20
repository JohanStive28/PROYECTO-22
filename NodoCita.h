//
// Created by Johan on 18/11/2022.
//

#ifndef PROYECTO2_SLN_NODOCITA_H
#define PROYECTO2_SLN_NODOCITA_H

#pragma once
#include <iostream>
#include <sstream>
#include "Cita.h"

using namespace std;

class NodoCita
{
private:
    Cita* cita;
    NodoCita* sig;
public:
    NodoCita(Cita*, NodoCita*);
    ~NodoCita();
    void setCita(Cita*);
    Cita* getCita();
    void setSig(NodoCita*);
    NodoCita* getSig();
    string toStringNodo();
};


#endif //PROYECTO2_SLN_NODOCITA_H
