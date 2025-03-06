#include "complejo.h"
#include <math.h> // Se incluye para las funciones sqrt y pow

void AsignarReal(Complejo* c, double r) {
    c->real = r;
}

void AsignarImaginario(Complejo* c, double i) {
    c->imaginaria = i;
}

double ObtenerReal(Complejo c) {
    return c.real; 
}

double ObtenerImaginario(Complejo c) {
    return c.imaginaria;
}

double Modulo(Complejo c) {
    return sqrt(pow(c.real, 2) + pow(c.imaginaria, 2));
}

Complejo Suma(Complejo c1, Complejo c2) {
    Complejo resultado;
    resultado.real = c1.real + c2.real;
    resultado.imaginaria = c1.imaginaria + c2.imaginaria;
    return resultado;
}
