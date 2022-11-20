//
// Created by Johan on 18/11/2022.
//

#include "Saluduni.h"


Saluduni::Saluduni(string nombre, string numero, string cedula)
{
    this->listaMedico = new ListaMedico();
    this->listaCita = new ListaCita();
    this->listaPacienteEst = new ListaPacienteEstudiante();
    this->listaPacienteProf = new ListaPacienteProfesor();
    this->listaTransporte = new ListaTransporte();
    nombreHospital = nombre;
    tel = numero;
    this->cedula = cedula;

}
string Saluduni::toString() {
    stringstream s;
    s << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << "\n"
      << "Hospital " << nombreHospital << "\n"
      << "Numero de contacto: " << tel << "\n"
      << "Cedula: " << cedula << '\n'
      << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << "\n";
    return s.str();

}


void Saluduni::ingresarPacienteEst(Estudiante* persona)
{
    listaPacienteEst->insertarPacienteEstudiante(persona);
}
void Saluduni::ingresarPacienteProf(Profesor* persona)
{
    listaPacienteProf->insertarPacienteProfesor(persona);
}

void Saluduni::ingresarAmbulancia(Transporte* ambulancia)
{
    listaTransporte->insertarTransporte(ambulancia);
}
void Saluduni::ingresarTaxi(Transporte* taxi)
{
    listaTransporte->insertarTransporte(taxi);
}

Saluduni::~Saluduni() = default;

void Saluduni::ingresarMedico(Medico* m)
{
    listaMedico->insertarMedico(m);
}

bool Saluduni::eliminarPacienteEst(string cedula)
{
    return listaPacienteEst->eliminarID(cedula);
}
bool Saluduni::eliminarPacienteProf(string cedula)
{
    return listaPacienteProf->eliminarID(cedula);
}

bool Saluduni::eliminarMedico(string cedula)
{
    return listaMedico->eliminarMedico(cedula);
}
bool Saluduni::eliminarTransporte(string placa)
{
    return listaTransporte->eliminarTransporte(placa);
}
string Saluduni::MedicoEspecifico(string id) {
    stringstream s;
    s<<listaMedico->MedicoEspecifico(id)->toString();
    return s.str(); 
}
bool Saluduni::existePacienteEst(string id)
{
    return listaPacienteEst->existepaciente(id);
}
bool Saluduni::existePacienteProf(string id)
{
    return listaPacienteProf->existepaciente(id);
}

bool Saluduni::existeMedico(string cedula)
{
    return listaMedico->existeMedico(cedula);
}

bool Saluduni::existeTransporte(string placa)
{
    return listaTransporte->existeVehiculo(placa);
}
bool Saluduni::ingresarCita(string codigo, string cedulaPaciente, string cedulaMedico, Fecha* f, Hora* h, string placa, string tipoViaje, double distancia) {
    Cita* cita = nullptr;
    if(!listaMedico->MedicoEspecifico(cedulaMedico)) return false;
    Estudiante* est = dynamic_cast<Estudiante*>(listaPacienteEst->getEstudiante(cedulaPaciente));
    if(!est) {
        Profesor* prof = dynamic_cast<Profesor*>(listaPacienteProf->getProfesor(cedulaPaciente));
        if(!prof) return false;
        cita = new Cita(codigo, prof, listaMedico->MedicoEspecifico(cedulaMedico), listaTransporte->getVehiculo(placa), h, f);
    } else
        cita = new Cita(codigo, est, listaMedico->MedicoEspecifico(cedulaMedico), listaTransporte->getVehiculo(placa), h, f);

    listaTransporte->getVehiculo(placa)->setTipoDeViaje(tipoViaje);
    listaTransporte->getVehiculo(placa)->setDistancia(distancia);
    listaTransporte->getVehiculo(placa)->setCostoViaje(cobro->realizarCobro(distancia));
    listaCita->insertarCita(cita);
    return true;
}

void Saluduni::editarMedico(string cedula, int option, string parametro){
    listaMedico->editarMedico(cedula, option, parametro);
}
void Saluduni::cancelarCita(string cod) {
    listaCita->cancelarCita(cod);
}

string Saluduni::getInfoTransporte(string placa) {
    stringstream s;
    s<< listaTransporte->getVehiculo(placa)->toString();
    return s.str();
        
}

void Saluduni::editarTransporte(string placa, int n, string parametro) {
    listaTransporte->editar(placa, n, parametro);
}

void Saluduni::editarPacienteEstudiante(string id, int option, string parametro) {
    listaPacienteEst->editar(id, option, parametro);
}
void Saluduni::editarPacienteProfesor(string id, int option, string parametro) {
    listaPacienteProf->editar(id, option, parametro);
}

Cita* Saluduni::getCita(string cod)
{
    return listaCita->getCita(cod);
}

string Saluduni::registroPaciente(string cod)
{
    return listaCita->toStringCitas(cod);
}

Paciente *Saluduni::busquedaPaciente(string id) {
    Paciente* paciente=nullptr;
    paciente = listaPacienteEst->getEstudiante(id);
    if(!paciente)
        paciente = listaPacienteProf->getProfesor(id);
    return paciente;
}

Estudiante *Saluduni::getEstudiante(string id) {
    return dynamic_cast<Estudiante*>(listaPacienteEst->getEstudiante(id));
}

Profesor *Saluduni::getProfesor(string id) {
    return dynamic_cast<Profesor*>(listaPacienteProf->getProfesor(id));
}

