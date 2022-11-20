//
// Created by Johan on 18/11/2022.
//

#ifndef PROYECTO2_SLN_CITA_H
#define PROYECTO2_SLN_CITA_H

#pragma once
#include "Paciente.h"
#include "Medico.h"
#include "Transporte.h"
#include "Hora.h"
#include "Fecha.h"


class Cita
{
private:
    string codigo;
    Paciente* paci;
    Medico* medi;
    Transporte* transpo;
    Hora* hora;
    Fecha* fecha;
public:
    Cita(string, Paciente*, Medico* , Transporte*, Hora*, Fecha*);
    ~Cita();
    string getCodigo();
    Paciente* getPaci();
    Medico* getMedi();
    Transporte* getTranspo();
    string toString();
};


#endif //PROYECTO2_SLN_CITA_H
