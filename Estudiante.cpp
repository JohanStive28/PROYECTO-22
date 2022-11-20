#include "Estudiante.h"

Estudiante::Estudiante(const string &nombre, const string &nomU, const string &id, const string &codCarrera,
                       const string &telefono, const string &nacionalidad, const string &condicion, int nivelCursado,
                       bool nacional) : Paciente(nombre, nomU, id), codCarrera(codCarrera), telefono(telefono),
                                        nacionalidad(nacionalidad), condicion(condicion), nivelCursado(nivelCursado),
                                        nacional(nacional) {}

Estudiante::Estudiante(const string &nombre, const string &nombreU, const string &id, const string &codCarrera, const string &telefono, int nivelCursado, bool nacional, bool estado) : Paciente(nombre,nombreU,id),codCarrera(codCarrera),
                                                                                                                         telefono(telefono),
                                                                                                                         nivelCursado(nivelCursado),
                                                                                                                         nacional(nacional),
                                                                                                                         estado(estado) {}

const string &Estudiante::getCodCarrera() const {
    return codCarrera;
}

void Estudiante::setCodCarrera(string &codCarrera) {
    Estudiante::codCarrera = codCarrera;
}

const string &Estudiante::getTelefono() const {
    return telefono;
}

void Estudiante::setTelefono(string &telefono) {
    Estudiante::telefono = telefono;
}

const string &Estudiante::getNacionalidad() const {
    return nacionalidad;
}

void Estudiante::setNacionalidad(string &nacionalidad) {
    Estudiante::nacionalidad = nacionalidad;
}

const string &Estudiante::getCondicion() const {
    return condicion;
}

void Estudiante::setCondicion(string &condicion) {
    Estudiante::condicion = condicion;
}

int Estudiante::getNivelCursado() const {
    return nivelCursado;
}

void Estudiante::setNivelCursado(int nivelCursado) {
    Estudiante::nivelCursado = nivelCursado;
}

bool Estudiante::isNacional() const {
    return nacional;
}

void Estudiante::setNacional(bool nacional) {
    Estudiante::nacional = nacional;
}

bool Estudiante::isEstado() const {
    return estado;
}

void Estudiante::setEstado(bool &estado) {
    Estudiante::estado = estado;
}

string Estudiante::toString() {
    stringstream s;
    s << "Nombre: " << nombre << endl;
    s << "Nombre Universidad: " << nomU << endl;
    s << "Codigo Carrera: " << codCarrera << endl;
    s << "Telefono: " << telefono << endl;
    if (nacional == false) {
        s << "Pasaporte: " << id << endl;
        s << "Nacionalidad: " << nacionalidad << endl;
        s << "Condicion: " << condicion << endl;
    }
    else {
        s << "Cedula: " << id << endl;
        s << "Estado: " << estado << endl;
    }
    s << "Ultimo nivel cursado: " << nivelCursado << endl;
    return s.str();
}



