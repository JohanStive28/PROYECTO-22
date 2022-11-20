//
// Created by Johan on 18/11/2022.
//

#include "NodoMedico.h"

NodoMedico::NodoMedico(Medico* m, NodoMedico* nodo) {
medico = m;
sig = nodo;
}
NodoMedico::~NodoMedico() {}
void NodoMedico::setMedico(Medico* medico) { this->medico = medico; }
Medico* NodoMedico::getMedico() { return medico; }
void NodoMedico::setSig(NodoMedico* nodo) { sig = nodo; }
NodoMedico* NodoMedico::getSig() { return sig; }
string NodoMedico::toStringNodo()
{
    return medico->toString();;
}