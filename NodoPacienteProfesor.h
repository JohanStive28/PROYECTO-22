//
// Created by Johan on 18/11/2022.
//

#ifndef PROYECTO2_SLN_NODOPACIENTEPROFESOR_H
#define PROYECTO2_SLN_NODOPACIENTEPROFESOR_H

#pragma once
#include <iostream>
#include <sstream>
#include "Profesor.h"

using namespace std;

class NodoPacienteProfesor
{
private:
    Profesor* paciente;
    NodoPacienteProfesor* sig;
public:
    NodoPacienteProfesor(Profesor*, NodoPacienteProfesor*);
    ~NodoPacienteProfesor();
    void setPaciente(Profesor*);
    Profesor* getProfesor();
    void setSig(NodoPacienteProfesor*);
    NodoPacienteProfesor* getSig();
    string toStringNodo();
};


#endif //PROYECTO2_SLN_NODOPACIENTEPROFESOR_H
