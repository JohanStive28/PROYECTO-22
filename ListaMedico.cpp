//
// Created by Johan on 18/11/2022.
//

#include "ListaMedico.h"
ListaMedico::ListaMedico() {
    primero = NULL;
    actual = NULL;
}
void ListaMedico::insertarMedico(Medico* medico)
{
    actual = primero;
    if (primero == NULL) // la lista esta vacia
    {
        primero = new NodoMedico(medico, NULL);
    }
    else
    {
        while (actual->getSig() != NULL) // este ciclo posiciona el puntero en 
        {                                // el ultimo de la lista
            actual = actual->getSig();
        }
        actual->setSig(new NodoMedico(medico, NULL));
    }
}
bool ListaMedico::eliminarMedico(string cedula) {
    if (primero == NULL)
    {
        return false;
    }
    else
    {
        actual = primero;
        while (actual != NULL) {
            if (actual->getMedico()->getId() == cedula) {
                delete actual;
                actual = primero;
                return true;
            }
            actual = actual->getSig();
        }
    }
    return false;
}

string ListaMedico::toString()
{
    stringstream s;
    actual = primero;
    while (actual != NULL) {
        s << actual->toStringNodo() << endl;
        actual = actual->getSig();
    }
    return s.str();
}
bool ListaMedico::listaVacia() {
    if (primero == NULL) return true;
    else return false;
}
ListaMedico::~ListaMedico() {
    while (primero != NULL) {
        actual = primero;
        primero = primero->getSig();
        delete actual;
    }
}
//metodos extra
bool ListaMedico::existeMedico(string id) {
    bool existe = false;
    if (!listaVacia()) {
        actual = primero;
        while (actual != NULL) {
            if (actual->getMedico()->getId() == id) {
                existe = true;
            }
            actual = actual->getSig();
        }

    }
    return existe;
}
//
int ListaMedico::cuentaNodos() {
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
//
Medico* ListaMedico::MedicoEspecifico(string id) {
    Medico* x = NULL;
    if (!listaVacia()) {
        actual = primero;
        while (actual != NULL) {
            if ((actual->getMedico()->getId()) == id) {
                x = (actual->getMedico());

            }
            actual = actual->getSig();
        }
    }
    return x;
}
void ListaMedico::editarMedico(string cedula, int option, string parametro)
{
    if (!listaVacia()) {
        actual = primero;
        while (actual != NULL) {
            if (actual->getMedico()->getId() == cedula) {
                switch (option) {
                    case 1:
                        actual->getMedico()->setNombre(parametro);
                        break;
                    case 2:
                        actual->getMedico()->setApellido(parametro);
                        break;
                    case 3:
                        actual->getMedico()->setId(parametro);
                        break;
                    case 4:
                        actual->getMedico()->setTelefono(parametro);
                        break;
                    case 5:
                        actual->getMedico()->setEspecialidad(parametro);
                        break;
                }
            }
            actual = actual->getSig();
        }

    }
}