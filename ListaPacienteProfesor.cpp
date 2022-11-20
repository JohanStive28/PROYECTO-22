//
// Created by Johan on 18/11/2022.
//

#include "ListaPacienteProfesor.h."
#include "Profesor.h"

ListaPacienteProfesor::ListaPacienteProfesor() {
    primero = NULL;
    actual = NULL;
}

void ListaPacienteProfesor::insertarPacienteProfesor(Profesor* profesor)
{
    actual = primero;
    if (primero == NULL) // la lista esta vacia
    {
        primero = new NodoPacienteProfesor(profesor, NULL);
    }
    else
    {
        while (actual->getSig() != NULL) // este ciclo posiciona el puntero en 
        {                                // el ultimo de la lista
            actual = actual->getSig();
        }
        actual->setSig(new NodoPacienteProfesor(profesor, NULL));
    }
}
bool ListaPacienteProfesor::eliminarID(string ID) {
    if (primero == NULL)
    {
        return false;
    }
    else
    {
        actual = primero;
        while (actual != NULL) {
            if (actual->getProfesor()->getId() == ID) {
                delete actual;
                actual = primero;
                return true;
            }
            actual = actual->getSig();
        }
    }
    return false;
}
string ListaPacienteProfesor::toString()
{
    stringstream s;
    actual = primero;
    while (actual != NULL) {
        s << actual->toStringNodo() << endl;
        actual = actual->getSig();
    }
    return s.str();
}
bool ListaPacienteProfesor::listaVacia() {
    if (primero == NULL) return true;
    else return false;
}

ListaPacienteProfesor::~ListaPacienteProfesor() {
    while (primero != NULL) {
        actual = primero;
        primero = primero->getSig();
        delete actual;
    }
}
//Métodos extra
bool ListaPacienteProfesor::existepaciente(string nom) {
    bool existe = false;
    if (!listaVacia()) {
        actual = primero;
        while (actual != NULL) {
            if (actual->getProfesor()->getNombre() == nom) {
                existe = true;
            }
            actual = actual->getSig();
        }

    }
    return existe;
}

Profesor* ListaPacienteProfesor::getProfesor(string id) {
    actual = primero;
    while (actual != NULL) {
        if (actual->getProfesor()->getId() == id) {
            return actual->getProfesor();
        }
        actual = actual->getSig();
    }
    return NULL;
}
int ListaPacienteProfesor::cuentaNodos() {
    int can = 0;
    if (!listaVacia()) {
        actual = primero;
        while (actual != NULL) {
            can++;
            actual = actual->getSig();
        }
    }
    else {
        can = 0;
    }
    return can;
}
NodoPacienteProfesor* ListaPacienteProfesor::buscarProfesor(string id) {
    if(!listaVacia()) {
        actual = primero;
        while(actual) {
            if(actual->getProfesor()->getId() == id) return actual;
            actual = actual->getSig();
        }
    }
    return nullptr;
}

bool ListaPacienteProfesor::editar(string id, int tipo, string parametro) {
    if (!listaVacia()) {
        Profesor* est = buscarProfesor(id)->getProfesor();
        if (est) {
            actual = primero;
            switch (tipo) {
                case 1:
                    est->setNombre(parametro);
                    return true;
                case 2:
                    est->setNomU(parametro);
                    return true;
                case 3:
                    est->setTitulo(parametro);
                case 4:
                    est->setAnniosLab(stoi(parametro));
                    return true;
                case 5:
                    est->setDato(stoi(parametro));
                    return true;
                case 6:
                    est->setId(parametro);
                    return true;
                default:
                    return false;
            }
        }
    }
    return false;
}