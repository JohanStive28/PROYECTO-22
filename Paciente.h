//
// Created by Johan on 17/11/2022.
//

#ifndef PRUEBAS_PACIENTE_H
#define PRUEBAS_PACIENTE_H

#include "sstream"
#include "iostream"

using namespace std;

class Paciente {
protected:
    string nombre;
    string nomU;
    string id;
public:
    Paciente(const string &nombre, const string &nomU, const string &id);


    virtual string toString() = 0;

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getNomU() const;

    void setNomU(const string &nomU);

    const string &getId() const;

    void setId(const string &nomU);

};


#endif //PRUEBAS_PACIENTE_H
