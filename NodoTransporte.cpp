//
// Created by Johan on 18/11/2022.
//

#include "NodoTransporte.h"
NodoTransporte::NodoTransporte(Transporte* transporte, NodoTransporte* nodo) {
    this->transporte = transporte;
    sig = nodo;
}
NodoTransporte::~NodoTransporte() {}
void NodoTransporte::setTransporte(Transporte* transporte) { this->transporte = transporte; }
Transporte* NodoTransporte::getTransporte() { return transporte; }
void NodoTransporte::setSig(NodoTransporte* nodo) { sig = nodo; }
NodoTransporte* NodoTransporte::getSig() { return sig; }
string NodoTransporte::toStringNodo()
{
    return transporte->toString();;
}