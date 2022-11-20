//
// Created by Johan on 18/11/2022.
//

#ifndef PROYECTO2_SLN_FECHA_H
#define PROYECTO2_SLN_FECHA_H
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Fecha {
private:
    int dia;
    int mes;
    int annio;
public:
    Fecha(int dia, int mes, int annio);

    int getDia() const;

    void setDia(int dia);

    int getMes() const;

    void setMes(int mes);

    int getAnnio() const;

    void setAnnio(int annio);

    string toString();
};


#endif //PROYECTO2_SLN_FECHA_H
