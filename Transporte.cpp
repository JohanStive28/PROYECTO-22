#include "Transporte.h"

Transporte::Transporte(const string &placa, const string &marca, const string &codigo,
                       bool ocupado, bool ambulancia) : placa(
        placa), marca(marca), codigo(codigo), ocupado(ocupado), ambulancia(ambulancia){}

Transporte::Transporte(const string &placa, const string &marca, bool ambulancia, int numeroPacientes) : placa(
        placa), marca(marca), ambulancia(ambulancia), numeroPacientes(numeroPacientes) {}

const string &Transporte::getPlaca() const {
    return placa;
}

void Transporte::setPlaca(const string &placa) {
    Transporte::placa = placa;
}

const string &Transporte::getMarca() const {
    return marca;
}

void Transporte::setMarca(const string &marca) {
    Transporte::marca = marca;
}

const string &Transporte::getTipoDeViaje() const {
    return tipoDeViaje;
}

void Transporte::setTipoDeViaje(const string &tipoDeViaje) {
    Transporte::tipoDeViaje = tipoDeViaje;
}

const string &Transporte::getCodigo() const {
    return codigo;
}

void Transporte::setCodigo(const string &codigo) {
    Transporte::codigo = codigo;
}

double Transporte::getDistancia() const {
    return distancia;
}

void Transporte::setDistancia(double distancia) {
    Transporte::distancia = distancia;
}

double Transporte::getCostoViaje() const {
    return costoViaje;
}

void Transporte::setCostoViaje(double costoViaje) {
    Transporte::costoViaje = costoViaje;
}

bool Transporte::isOcupado() const {
    return ocupado;
}

void Transporte::setOcupado(bool ocupado) {
    Transporte::ocupado = ocupado;
}

bool Transporte::isAmbulancia() const {
    return ambulancia;
}

void Transporte::setAmbulancia(bool ambulancia) {
    Transporte::ambulancia = ambulancia;
}

int Transporte::getNumeroPacientes() const {
    return numeroPacientes;
}

void Transporte::setNumeroPacientes(int numeroPacientes) {
    Transporte::numeroPacientes = numeroPacientes;
}

string Transporte::toString(){
    stringstream s;
    s << "Placa: " << placa << endl;
    s << "Marca: " << marca << endl;
    if(ambulancia){
        s << "Codigo: " << codigo << endl;
        s << "Ocupado: " << ocupado << endl;
    }
    else{
        s << "Numero de Pacientes: " << numeroPacientes << endl;
        s << "Costo del viaje: " << costoViaje << endl;
    }
    s << "Distancia (Kilometros): " << distancia << endl;
    s << "Tipo de viaje: " << tipoDeViaje << endl;
    return s.str();
}
