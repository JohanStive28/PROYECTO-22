//
// Created by Johan on 18/11/2022.
//

#include "Fecha.h"

Fecha::Fecha(int dia, int mes, int annio) : dia(dia), mes(mes), annio(annio) {}

int Fecha::getDia() const {
    return dia;
}

void Fecha::setDia(int dia) {
    Fecha::dia = dia;
}

int Fecha::getMes() const {
    return mes;
}

void Fecha::setMes(int mes) {
    Fecha::mes = mes;
}

int Fecha::getAnnio() const {
    return annio;
}

void Fecha::setAnnio(int annio) {
    Fecha::annio = annio;
}

string Fecha::toString()
{
    stringstream s;
    s << "Fecha formato dd/mm/aa " << "\n"
      << getDia() << "/" << getMes() << "/" << getAnnio();
    return s.str();
}
