//
// Created by Johan on 18/11/2022.
//

#include "Cita.h"

Cita::Cita(string code, Paciente* p, Medico* m ,Transporte* t, Hora* h, Fecha* f)
{
    codigo = code;
    paci = p;
    medi = m;
    transpo=t;
    hora = h;
    fecha = f;
}

Cita::~Cita()
{
    /*delete paci;
    delete medi;
    delete transpo;*/
}

string Cita::getCodigo()
{
    return codigo;
}

Paciente* Cita::getPaci()
{
    return paci;
}

Medico* Cita::getMedi()
{
    return medi;
}

Transporte* Cita::getTranspo()
{
    return transpo;
}

string Cita::toString()
{
    stringstream s;
    s << "Codigo: " << codigo << "\n"
      << "Fecha de la cita:" << fecha->toString()<< "\n"
      << "Hora de la cita: "<<hora->toString()<< "\n"
      << "Paciente: \n" << paci->toString() << "\n"
      << "Medico: \n" << medi->toString()
      << "Transporte: \n"<< transpo->toString() << "\n";
    return s.str();
}
