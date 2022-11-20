//
// Created by Johan on 18/11/2022.
//

#ifndef PROYECTO2_SLN_LISTAPACIENTEPROFESOR_H
#define PROYECTO2_SLN_LISTAPACIENTEPROFESOR_H

#pragma once
#include <iostream>
#include <sstream>
#include "NodoPacienteProfesor.h"
#include "Profesor.h"


using namespace std;

class ListaPacienteProfesor
{
private:
    NodoPacienteProfesor* primero;
    NodoPacienteProfesor* actual;
public:
    ListaPacienteProfesor();
    void insertarPacienteProfesor(Profesor*);
    bool eliminarID(string);
    string toString();
    bool listaVacia();
    bool existepaciente(string);
    Profesor* getProfesor(string);
    int cuentaNodos();
    NodoPacienteProfesor* buscarProfesor(string);
    bool editar(string,int,string);
    ~ListaPacienteProfesor();
};


#endif //PROYECTO2_SLN_LISTAPACIENTEESTUDIANTE_H
