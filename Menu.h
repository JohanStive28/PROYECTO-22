//
// Created by Johan on 18/11/2022.
//

#include <sstream>
#ifndef PROYECTO2_SLN_MENU_H
#define PROYECTO2_SLN_MENU_H

#pragma once
#include <iostream>
#include <sstream>
#include <stdio.h>
#include "Saluduni.h"
#include "Estudiante.h"
#include "Profesor.h"
#include "Medico.h"
#include "Facilitadores.h"

using namespace std;

class Menu
{
private:
    Saluduni* saluduni;
public:
    
    string MostrarMenu();
    void InfoHospital();
    void MenuPrincipal();
    string InfosubMenuCitas();
    void subMenuCitas();
    string InfosubsubMenuCitas();
    string InfosubsubsubMenuCitas();
    string InfosubMenuMantenimiento();
    void subMenuMantenimiento();
    string InfosubsubMenuMantenimientoop1();
    void subsubMenuMantenimientoop1();
    string InfosubsubMenuMantenimientoop2();
    void subsubMenuMantenimientoop2();
    string InfosubsubMenuMantenimientoop3();
    void subsubMenuMantenimientoop3();
    string InfosubsubMenuMantenimientoop4();
    void subsubMenuMantenimientoop4();
    string InfoBusquedas();
    void MenuBusquedas();
    string SubMenuReportes();
    void MenuReportes();
    string infoEditarPacientesEstNa();
    string infoEditarPacientesEstIn();
    string infoEditarPacientesProfPro();
    string infoEditarPacientesProfInt();
    string infoEditarMedicos();
    string infoEditarAmbulancias();
    string infoEditarTaxis();
    void editarPaciente(string);
    void editarPacienteEstudiante(int,string);
    void editarPacienteProfesor(int, string);
    void datosCita();
    string necesitaTransporte();
    Cita* buscarCita(string);
    void InfocancelarCita();
    void buscarCitaString();
    string registroCitas();
};


#endif //PROYECTO2_SLN_MENU_H
