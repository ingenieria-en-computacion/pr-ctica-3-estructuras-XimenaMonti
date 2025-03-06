#include <stdio.h>
#include "complejo.h"

int main() {
    
    Complejo c1, c2, suma;
    
    // Asignamos valores a c1
    AsignarReal(&c1, 3.0);
    AsignarImaginario(&c1, 4.0);

    // Asignamos valores a c2
    AsignarReal(&c2, 1.0);
    AsignarImaginario(&c2, 2.0);

    // Mostramos los valores
    printf("Complejo 1: %.2f + %.2fi\n", ObtenerReal(c1), ObtenerImaginario(c1));
    printf("Complejo 2: %.2f + %.2fi\n", ObtenerReal(c2), ObtenerImaginario(c2));

    // Para la suma
    suma = Suma(c1, c2);
    printf("Suma: %.2f + %.2fi\n", ObtenerReal(suma), ObtenerImaginario(suma));

    // Para el modulo
    printf("Módulo de c1: %.2f\n", Modulo(c1));

    return 0;
}
