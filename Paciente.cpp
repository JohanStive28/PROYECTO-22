//
// Created by jjgr2 on 17/11/2022.
//

#include "Paciente.h"

Paciente::Paciente(const string &nombre, const string &nomU, const string &id) : nombre(nombre), nomU(nomU), id(id) {

}

const string &Paciente::getNombre() const {
    return nombre;
}

void Paciente::setNombre(const string &nombre) {
    Paciente::nombre = nombre;
}

const string &Paciente::getNomU() const {
    return nomU;
}

void Paciente::setNomU(const string &nomU) {
    Paciente::nomU = nomU;
}

const string &Paciente::getId() const {
    return id;
}

void Paciente::setId(const string &id) {
    Paciente::id = id;
}


