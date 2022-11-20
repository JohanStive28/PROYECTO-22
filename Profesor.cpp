

#include "Profesor.h"

Profesor::Profesor(const string &nombre, const string &nomU, const string &id, bool propiedad, const string &titulo,
                   int anniosLab, int dato) : Paciente(nombre, nomU, id), propiedad(propiedad), titulo(titulo),
                                              anniosLab(anniosLab), dato(dato) {}



string Profesor::toString() {
    stringstream ss;
    ss << "Nombre : " << nombre << endl;
    ss << "Nombre U : " << nomU << endl;
    ss << "ID : " << id << endl;
    ss << "Titulo : " << titulo << endl;
    ss << "Años Laborados: " << anniosLab << endl;
    propiedad ? ss << "Codigo : " : ss << "Calificacion : ";
    ss << dato << endl;


    return ss.str();
}

bool Profesor::isPropiedad() const {
    return propiedad;
}

void Profesor::setPropiedad(bool propiedad) {
    Profesor::propiedad = propiedad;
}

const string &Profesor::getTitulo() const {
    return titulo;
}

void Profesor::setTitulo(const string &titulo) {
    Profesor::titulo = titulo;
}

int Profesor::getAnniosLab() const {
    return anniosLab;
}

void Profesor::setAnniosLab(int anniosLab) {
    Profesor::anniosLab = anniosLab;
}

int Profesor::getDato() const {
    return dato;
}

void Profesor::setDato(int dato) {
    Profesor::dato = dato;
}

