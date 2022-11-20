//
// Created by Johan on 18/11/2022.
//

#ifndef PROYECTO2_SLN_HORA_H
#define PROYECTO2_SLN_HORA_H
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Hora
{
private:
    int horas;
    int minutos;
public:
    Hora(int horas, int minutos);

    int getHoras() const;

    void setHoras(int horas);

    int getMinutos() const;

    void setMinutos(int minutos);

    string toString();
};


#endif //PROYECTO2_SLN_HORA_H
