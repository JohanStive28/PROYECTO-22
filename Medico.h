#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Medico
{
private:
    string nombre, apellido, id, telefono, especialidad;
public:
    Medico(const string &nombre, const string &apellido, const string &id, const string &telefono,
           const string &especialidad);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getApellido() const;

    void setApellido(const string &apellido);

    const string &getId() const;

    void setId(const string &id);

    const string &getTelefono() const;

    void setTelefono(const string &telefono);

    const string &getEspecialidad() const;

    void setEspecialidad(const string &especialidad);

    string toString();
};

