//
// Created by Johan on 18/11/2022.
//

#include "NodoCita.h"

NodoCita::NodoCita(Cita* cita, NodoCita* nodo) {
    this->cita = cita;
    sig = nodo;
}
NodoCita::~NodoCita() {}
void NodoCita::setCita(Cita* cita) { this->cita = cita; }
Cita* NodoCita::getCita() { return cita; }
void NodoCita::setSig(NodoCita* nodo) { sig = nodo; }
NodoCita* NodoCita::getSig() { return sig; }
string NodoCita::toStringNodo()
{
    return cita->toString();;
}