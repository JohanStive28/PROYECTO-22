//
// Created by Johan on 18/11/2022.
//
#include "NodoPacienteProfesor.h"

NodoPacienteProfesor::NodoPacienteProfesor(Profesor* paciente, NodoPacienteProfesor * nodo) {
    this->paciente = paciente;
    sig = nodo;
}
NodoPacienteProfesor::~NodoPacienteProfesor() {}
void NodoPacienteProfesor::setPaciente(Profesor* paciente) {
    this->paciente = paciente;
}

Profesor* NodoPacienteProfesor::getProfesor() { return paciente; }
void NodoPacienteProfesor::setSig(NodoPacienteProfesor* nodo) { sig = nodo; }
NodoPacienteProfesor* NodoPacienteProfesor::getSig() { return sig; }
string NodoPacienteProfesor::toStringNodo()
{
    return paciente->toString();
}