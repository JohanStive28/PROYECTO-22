#pragma once
#include <iostream>
#include <sstream>

using namespace  std;

class Transporte {
private:
    string placa, marca, tipoDeViaje, codigo;
    double distancia = 0, costoViaje = 0;
    bool ocupado = 0, ambulancia = 0;
    int numeroPacientes = 0;
public:
    Transporte(const string &placa, const string &marca, const string &codigo, bool ocupado, bool ambulancia);

    Transporte(const string &placa, const string &marca, bool ambulancia, int numeroPacientes);

    const string &getPlaca() const;

    void setPlaca(const string &placa);

    const string &getMarca() const;

    void setMarca(const string &marca);

    const string &getTipoDeViaje() const;

    void setTipoDeViaje(const string &tipoDeViaje);

    const string &getCodigo() const;

    void setCodigo(const string &codigo);

    double getDistancia() const;

    void setDistancia(double distancia);

    double getCostoViaje() const;

    void setCostoViaje(double costoViaje);

    bool isOcupado() const;

    void setOcupado(bool ocupado);

    bool isAmbulancia() const;

    void setAmbulancia(bool ambulancia);

    int getNumeroPacientes() const;

    void setNumeroPacientes(int numeroPacientes);

    string toString();
};

