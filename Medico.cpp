#include "Medico.h"

Medico::Medico(const string &nombre, const string &apellido, const string &id, const string &telefono,
               const string &especialidad) : nombre(nombre), apellido(apellido), id(id), telefono(telefono),
                                             especialidad(especialidad) {}

const string &Medico::getNombre() const {
    return nombre;
}

void Medico::setNombre(const string &nombre) {
    Medico::nombre = nombre;
}

const string &Medico::getApellido() const {
    return apellido;
}

void Medico::setApellido(const string &apellido) {
    Medico::apellido = apellido;
}

const string &Medico::getId() const {
    return id;
}

void Medico::setId(const string &id) {
    Medico::id = id;
}

const string &Medico::getTelefono() const {
    return telefono;
}

void Medico::setTelefono(const string &telefono) {
    Medico::telefono = telefono;
}

const string &Medico::getEspecialidad() const {
    return especialidad;
}

void Medico::setEspecialidad(const string &especialidad) {
    Medico::especialidad = especialidad;
}
string Medico::toString()
{
    stringstream s;
    s << "Nombre : " << nombre << "\n"
      << "Apellido: " << apellido << "\n"
      << "Cedula: " << id << "\n"
      << "Numero Telefonico: " << telefono << "\n"
      << "Especialidad : "<< especialidad << "\n";
    return s.str();
}

