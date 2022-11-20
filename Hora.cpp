//
// Created by Johan on 18/11/2022.
//

#include "Hora.h"

Hora::Hora(int horas, int minutos) : horas(horas), minutos(minutos) {}

int Hora::getHoras() const {
    return horas;
}

void Hora::setHoras(int horas) {
    Hora::horas = horas;
}

int Hora::getMinutos() const {
    return minutos;
}

void Hora::setMinutos(int minutos) {
    Hora::minutos = minutos;
}

string Hora::toString()
{
    stringstream s;
    s << getHoras()<<":"<<getMinutos();
    return s.str();
}
