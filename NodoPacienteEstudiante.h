//
// Created by Johan on 18/11/2022.
//

#ifndef PROYECTO2_SLN_NODOPACIENTEESTUDIANTE_H
#define PROYECTO2_SLN_NODOPACIENTEESTUDIANTE_H

#pragma once
#include <iostream>
#include <sstream>
#include "Estudiante.h"

using namespace std;

class NodoPacienteEstudiante
{
private:
    Estudiante* paciente;
    NodoPacienteEstudiante* sig;
public:
    NodoPacienteEstudiante(Estudiante*, NodoPacienteEstudiante*);
    ~NodoPacienteEstudiante();
    void setPaciente(Estudiante*);
    Estudiante* getEstudiante();
    void setSig(NodoPacienteEstudiante*);
    NodoPacienteEstudiante* getSig();
    string toStringNodo();
};


#endif //PROYECTO2_SLN_NODOPACIENTEESTUDIANTE_H
