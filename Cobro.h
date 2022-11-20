#pragma once
#include "Transporte.h"

class Cobro : public Transporte
{
private:
	double total = 0, montoCancelar = 0;
public:
	double realizarCobro(double);
	double getTotal();
};