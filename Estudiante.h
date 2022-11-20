#pragma once
#include <iostream>
#include <sstream>
#include "Paciente.h"

using namespace std;

class Estudiante : public Paciente {
private:
    string codCarrera, telefono, nacionalidad, condicion;
    int nivelCursado;
    bool nacional, estado;
public:

    Estudiante(const string &nombre, const string &nombreU, const string &id, const string &codCarrera, const string &telefono, const string &nacionalidad, const string &condicion, int nivelCursado, bool nacional);

    Estudiante(const string &nombre, const string &nombreU, const string &id, const string &codCarrera, const string &telefono, int nivelCursado, bool nacional, bool estado);

    const string &getCodCarrera() const;

    const string &getTelefono() const;

    const string &getNacionalidad() const;

    const string &getCondicion() const;

    int getNivelCursado() const;

    bool isNacional() const;

    void setNacional(bool nacional);

    bool isEstado() const;

    virtual void setTelefono(string &telefono);

    virtual void setCodCarrera(string &codigoCarrera);

    virtual void setNacionalidad(string &nacionalidad);

    virtual void setCondicion(string &condicion);

    virtual void setNivelCursado(int nivel);

    virtual void setEstado(bool &estado);

    string toString();
};

