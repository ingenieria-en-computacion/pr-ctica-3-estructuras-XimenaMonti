#include "conjunto.h"  //para agregar archivos , colocar " "
#include<stdio.h>

CONJUNTO conjunto_vacio(){
    CONJUNTO c;
    c.cant = 0; //cantidad de elementos guardados
    return c;
}

CONJUNTO agregar(CONJUNTO c, DATO d){
    CONJUNTO t = c;
    if (!pertenece(t, d) && t.cant < TAM) { // si no pertenece al conjunto y el número de elementos es menor al tamaño 
        t.datos[t.cant] = d; 
        t.cant++;
    }
    return t;
}

bool pertenece(CONJUNTO c, DATO d){
    if (!es_vacio(c)) { // si c está vacío
        for (int i = 0; i < c.cant; i++) {
            if (c.datos[i] == d) return true; // Si el dato pertenece, retorna true
        }
    }
    return false; // Si no pertenece, retorna false
}

CONJUNTO quitar(CONJUNTO c, DATO d){
    CONJUNTO t = c;
    int i = 0;
    if (pertenece(t, d)) {
        for (; i < t.cant; i++) {
            if (t.datos[i] == d) {
                break;
            }
        }
        if (i != t.cant - 1) {
            for (int j = i + 1; j < t.cant; j++) {
                t.datos[j - 1] = t.datos[j]; // Mover elementos hacia la izquierda
            }
        }
        t.cant--;
    }  
    return t;
}

bool es_vacio(CONJUNTO c){
    return c.cant == 0; // Retorna el resultado de evaluar esa expresión (true o false)
}

int cardinal(CONJUNTO c){
    return c.cant;
}

CONJUNTO union_conjuntos(CONJUNTO c, CONJUNTO d){
    CONJUNTO t = c;
    for (int i = 0; i < d.cant; i++) {
        t = agregar(t, d.datos[i]); 
    }
    return t;
}

void print_conjunto(CONJUNTO c){
    printf("{ ");
    for (int i = 0; i < c.cant; i++) {
        printf("%d ", c.datos[i]); // Imprimir cada elemento del conjunto
    }
    printf("}\n");
}
