//
// Created by Johan on 18/11/2022.
//

#include "NodoPacienteEstudiante.h"
#include "Estudiante.h"

NodoPacienteEstudiante::NodoPacienteEstudiante(Estudiante* paciente, NodoPacienteEstudiante * nodo) {
    this->paciente = paciente;
    sig = nodo;
}
NodoPacienteEstudiante::~NodoPacienteEstudiante() {}
void NodoPacienteEstudiante::setPaciente(Estudiante * paciente) {
    this->paciente = paciente;
}

Estudiante* NodoPacienteEstudiante::getEstudiante() { return paciente; }
void NodoPacienteEstudiante::setSig(NodoPacienteEstudiante* nodo) { sig = nodo; }
NodoPacienteEstudiante* NodoPacienteEstudiante::getSig() { return sig; }
string NodoPacienteEstudiante::toStringNodo()
{
    return paciente->toString();
}