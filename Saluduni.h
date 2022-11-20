//
// Created by Johan on 18/11/2022.
//

#ifndef PROYECTO2_SLN_SALUDUNI_H
#define PROYECTO2_SLN_SALUDUNI_H
#pragma once
#include <iostream>
#include <sstream>
#include "Hora.h"
#include "Fecha.h"
#include "Medico.h"
#include "Transporte.h"
#include "Cita.h"
#include "ListaPacienteEstudiante.h"
#include "ListaMedico.h"
#include "ListaTransporte.h"
#include "ListaCita.h"
#include "ListaPacienteProfesor.h"
#include "Cobro.h"


using namespace std;

class Saluduni
{
private:
    string cedula, tel, nombreHospital;
    ListaPacienteEstudiante* listaPacienteEst;
    ListaPacienteProfesor* listaPacienteProf;
    ListaMedico* listaMedico;
    ListaTransporte* listaTransporte;
    ListaCita* listaCita;
    Cobro* cobro;
public:
    Saluduni(string,string,string);
    ~Saluduni();
    string toString();

    void cancelarCita(string);
    bool ingresarCita(string,string,string,Fecha*,Hora*,string,string,double);
    void ingresarPacienteEst(Estudiante* persona);
    void ingresarPacienteProf(Profesor* persona);
    void ingresarMedico(Medico* medico);
    void ingresarAmbulancia(Transporte* ambulancia);
    string MedicoEspecifico(string);
    string getInfoTransporte(string);
    void ingresarTaxi(Transporte* taxi);
    bool eliminarPacienteEst(string);
    bool eliminarPacienteProf(string);
    bool eliminarMedico(string);
    bool eliminarTransporte(string);
    Paciente* busquedaPaciente(string);
    bool existePacienteEst(string);
    bool existePacienteProf(string);
    bool existeMedico(string);
    bool existeTransporte(string);
    void editarTransporte(string, int, bool);
    void editarTransporte(string, int, string);
    void editarTransporte(string, int, int);
    void editarTransporte(string, int, double);
    void editarMedico(string, int, string);
    void editarPacienteEstudiante(string, int, string);
    void editarPacienteProfesor(string, int, string);
    void buscarCita();
    Estudiante* getEstudiante(string);
    Profesor* getProfesor(string);
    Cita* getCita(string);
    string registroPaciente(string);
};


#endif //PROYECTO2_SLN_SALUDUNI_H
