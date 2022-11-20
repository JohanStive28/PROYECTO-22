#include "Cobro.h"

double Cobro::realizarCobro(double distancia)
{
    if (distancia < 0.5)
        return montoCancelar = 950;
    if (distancia > 1 && distancia < 2) {
        montoCancelar = distancia * 950;
        distancia = -2;
    }
    else if (distancia > 2 && distancia < 5) {
        montoCancelar = +distancia * 700;
        distancia = -5;
    }
    else if (distancia > 5) {
        montoCancelar = +distancia * 600;
    }
    if (getNumeroPacientes() > 0) {
        montoCancelar = +montoCancelar * (getNumeroPacientes() * 0.10);

    }
    total = montoCancelar;
    return montoCancelar;
}

double Cobro::getTotal()
{
    return total;
}