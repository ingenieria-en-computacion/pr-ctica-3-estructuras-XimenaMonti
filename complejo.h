#ifndef COMPLEJO_H
#define COMPLEJO_H

typedef struct {
    double real;
    double imaginaria;
} Complejo;

//prototipos de funciones 
void AsignarReal(Complejo* c,double r);
void AsignarImaginario(Complejo* c,double i);
double ObtenerReal(Complejo c);
double ObtenerImaginario(Complejo c);
double Modulo(Complejo c);
Complejo Suma(Complejo c1,Complejo c2);
double mi_sqrt(double num);// esta funcion calcula la raiz cuadrada de un numero
#endif // COMPLEJO_H
