//
// Created by Johan on 18/11/2022.
//

#include <conio.h>
#include <clocale>//para el idioma español
#include "Facilitadores.h"
char captaTecla() {
    char tecla = _getch();
    return tecla;
}
void colorMenu() {
    system("color E0");
}
void agregarEntradaEspannol() {
    setlocale(LC_CTYPE, "Spanish");
}
void PausaPantallaMenu() {
    system("pause");
}
void limpiaPantallaMenu() {
    system("cls");
}
void imprimirConSalto(string print) { cout << print << '\n'; }
string leer() {
    string l;
    getline(cin, l);
    return l;
    cin.clear();
}
string mayuscula(string cadena) {
    for (size_t i = 0; i < cadena.length(); i++) {
        cadena[i] = toupper(cadena[i]);
    }
    return cadena;
}