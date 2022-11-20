//
// Created by Johan on 18/11/2022.
//

#include "ListaPacienteEstudiante.h"

ListaPacienteEstudiante::ListaPacienteEstudiante() {
    primero = NULL;
    actual = NULL;
}
void ListaPacienteEstudiante::insertarPacienteEstudiante(Estudiante* estudiante)
{
    actual = primero;
    if (primero == NULL) // la lista esta vacia
    {
        primero = new NodoPacienteEstudiante(estudiante, NULL);
    }
    else
    {
        while (actual->getSig() != NULL) // este ciclo posiciona el puntero en 
        {                                // el ultimo de la lista
            actual = actual->getSig();
        }
        actual->setSig(new NodoPacienteEstudiante(estudiante, NULL));
    }
}
bool ListaPacienteEstudiante::eliminarID(string ID) {
    if (primero == NULL)
    {
        return false;
    }
    else
    {
        actual = primero;
        while (actual != NULL) {
            if (actual->getEstudiante()->getId() == ID) {
                delete actual;
                actual = primero;
                return true;
            }
            actual = actual->getSig();
        }
    }
    return false;
}
string ListaPacienteEstudiante::toString()
{
    stringstream s;
    actual = primero;
    while (actual != NULL) {
        s << actual->toStringNodo() << endl;
        actual = actual->getSig();
    }
    return s.str();
}
bool ListaPacienteEstudiante::listaVacia() {
    if (primero == NULL) return true;
    else return false;
}

void ListaPacienteEstudiante::editarNivelCursado(string id, int parametro)
{
    getEstudiante(id)->setNivelCursado(parametro);
}

void ListaPacienteEstudiante::editarEstado(string id, bool parametro)
{
    getEstudiante(id)->setEstado(parametro);
}

ListaPacienteEstudiante::~ListaPacienteEstudiante() {
    while (primero != NULL) {
        actual = primero;
        primero = primero->getSig();
        delete actual;
    }
}
//Métodos extra
bool ListaPacienteEstudiante::existepaciente(string nom) {
    bool existe = false;
    if (!listaVacia()) {
        actual = primero;
        while (actual != NULL) {
            if (actual->getEstudiante()->getNombre() == nom) {
                existe = true;
            }
            actual = actual->getSig();
        }

    }
    return existe;
}

Estudiante* ListaPacienteEstudiante::getEstudiante(string id) {
    actual = primero;
    while (actual != nullptr) {
        if (actual->getEstudiante()->getId() == id) {
            return actual->getEstudiante();
        }
        actual = actual->getSig();
    }
    return NULL;
}
int ListaPacienteEstudiante::cuentaNodos() {
    int can = 0;
    if (!listaVacia()) {
        actual = primero;
        while (actual != NULL) {
            can++;
            actual = actual->getSig();
        }
    } else {
        can = 0;
    }
    return can;
}
NodoPacienteEstudiante *ListaPacienteEstudiante::buscarEstudiante(string id) {
    if(!listaVacia()) {
        actual = primero;
        while(actual) {
            if(actual->getEstudiante()->getId() == id) return actual;
            actual = actual->getSig();
        }
    }
    return nullptr;
}

bool ListaPacienteEstudiante::editar(string id, int tipo, string parametro) {
    if (!listaVacia()) {
        Estudiante* est = buscarEstudiante(id)->getEstudiante();
        if (est) {
            bool x;
            actual = primero;
            switch (tipo) {
                case 1:
                    est->setNombre(parametro);
                    return true;
                case 2:
                    est->setNomU(parametro);
                    return true;
                case 3:
                    est->setTelefono(parametro);
                    return true;
                case 4:
                    est->setCodCarrera(parametro);
                    return true;
                case 5:
                    est->setNivelCursado(stoi(parametro));
                    return true;
                case 6:
                    est->setId(parametro);
                    return true;
                case 7:
                    x = stoi(parametro);
                    if(est->isNacional()) est->setEstado(x);
                    else est->setNacionalidad(parametro);
                    return true;
                case 8:
                    est->setCondicion(parametro);
                    return true;
                default:
                    return false;
            }
        }
    }
    return false;
}
