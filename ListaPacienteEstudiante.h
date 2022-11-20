//
// Created by Johan on 18/11/2022.
//

#ifndef PROYECTO2_SLN_LISTAPACIENTEESTUDIANTE_H
#define PROYECTO2_SLN_LISTAPACIENTEESTUDIANTE_H

#pragma once
#include <iostream>
#include <sstream>
#include "NodoPacienteEstudiante.h"
#include "Estudiante.h"


using namespace std;

class ListaPacienteEstudiante
{
private:
    NodoPacienteEstudiante* primero;
    NodoPacienteEstudiante* actual;
public:
    ListaPacienteEstudiante();
    void insertarPacienteEstudiante(Estudiante*);
    bool eliminarID(string);
    string toString();
    bool listaVacia();
    bool existepaciente(string);
    Estudiante* getEstudiante(string);
    int cuentaNodos();
    NodoPacienteEstudiante* buscarEstudiante(string);
    bool editar(string id, int tipo, string parametro);
    void editarNivelCursado(string, int);
    void editarEstado(string, bool);
    ~ListaPacienteEstudiante();
};


#endif //PROYECTO2_SLN_LISTAPACIENTEESTUDIANTE_H
