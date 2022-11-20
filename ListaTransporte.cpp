//
// Created by Johan on 18/11/2022.
//

#include "ListaTransporte.h"
ListaTransporte::ListaTransporte() {
    primero = NULL;
    actual = NULL;
}
void ListaTransporte::insertarTransporte(Transporte* transporte)
{
    actual = primero;
    if (primero == NULL) // la lista esta vacia
    {
        primero = new NodoTransporte(transporte, NULL);
    }
    else
    {
        while (actual->getSig() != NULL) // este ciclo posiciona el puntero en 
        {                                // el ultimo de la lista
            actual = actual->getSig();
        }
        actual->setSig(new NodoTransporte(transporte, NULL));
    }
}

bool ListaTransporte::eliminarTransporte(string placa) {
    if (primero == NULL)
    {
        return false;
    }
    else
    {
        actual = primero;
        while (actual != NULL) {
            if (actual->getTransporte()->getPlaca() == placa) {
                delete actual;
                actual = primero;
                return true;
            }
            actual = actual->getSig();
        }
    }
    return false;
}

string ListaTransporte::toString()
{
    stringstream s;
    actual = primero;
    while (actual != NULL) {
        s << actual->toStringNodo() << endl;
        actual = actual->getSig();
    }
    return s.str();
}
bool ListaTransporte::listaVacia() {
    if (primero == NULL) return true;
    else return false;
}
bool ListaTransporte::existeVehiculo(string placa) {
    bool existe = false;
    if (!listaVacia()) {
        actual = primero;
        while (actual != NULL) {
            if (actual->getTransporte()->getPlaca() == placa) {
                existe = true;
            }
            actual = actual->getSig();
        }

    }
    return existe;
}

bool ListaTransporte::editar(string placa, int option, string parametro)
{
    if (!listaVacia()) {
        actual = primero;
        while (actual != nullptr) {
            if (actual->getTransporte()->getPlaca() == placa) {
                switch (option) {
                    case 1:     //placa
                        actual->getTransporte()->setPlaca(parametro);
                        return true;
                    case 2:     //codigo
                        actual->getTransporte()->setCodigo(parametro);
                        return true;
                    case 3:     //marca
                        actual->getTransporte()->setMarca(parametro);
                        return true;
                    case 4:     //ocupado
                        (parametro == "true")? actual->getTransporte()->setOcupado(true) : actual->getTransporte()->setOcupado(false);
                        return true;
                    case 5:     //kilometraje
                        actual->getTransporte()->setDistancia(stod(parametro));
                        return true;
                    case 6:     //tipo viaje
                        actual->getTransporte()->setTipoDeViaje(parametro);
                        return true;
                    case 7:     //tipo viaje
                        actual->getTransporte()->setNumeroPacientes(stoi(parametro));
                        return true;
                    default:
                        return false;
                }
            }
            actual = actual->getSig();
        }
    }
    return false;
}


ListaTransporte::~ListaTransporte() {
    while (primero != NULL) {
        actual = primero;
        primero = primero->getSig();
        delete actual;
    }
}
int ListaTransporte::cuentaNodos() {
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

Transporte* ListaTransporte::getVehiculo(string id) {
    Transporte* x = NULL;
    if (!listaVacia()) {
        actual = primero;
        while (actual != NULL) {
            if ((actual->getTransporte()->getPlaca()) == id) {
                x = (actual->getTransporte());

            }
            actual = actual->getSig();
        }
    }
    return x;
}