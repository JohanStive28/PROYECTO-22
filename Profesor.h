

#ifndef PRUEBAS_PROFESOR_H
#define PRUEBAS_PROFESOR_H
#include "Paciente.h"

class Profesor : public Paciente{
private:
    bool propiedad;
    string titulo;
    int anniosLab;
    int dato;
public:
    Profesor(const string &nombre, const string &nomU, const string &id, bool propiedad, const string &titulo,
             int anniosLab, int dato);

    bool isPropiedad() const;

    void setPropiedad(bool propiedad);

    const string &getTitulo() const;

    void setTitulo(const string &titulo);

    int getAnniosLab() const;

    void setAnniosLab(int anniosLab);

    int getDato() const;

    void setDato(int dato);

    string toString() override;
};


#endif //PRUEBAS_PROFESOR_H
