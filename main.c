#include <stdio.h>
#include "conjunto.h"


int main(){
    CONJUJNTO c,d,e;
    c = conjunto_vacio();
    d = conjujnto_vacio();
    e= conjunto_vacio();
    print_conjunto(c);
    print_conjunto(d);
    print_conjunto(e);

   

    printf("El conjutno c estó vació %d \n"),es_vacio(c);
    c= agregar(c,2);
    c= agregar(c,3);
    c= agregar(c,19);
    c= agregar(c,11);
    c= agregar(c,15);
    print_conjunto(c);


    d= agregar(d,12);//agregar datoas al conjunto d 
    d= agregar(d,22);
    d= agregar(d,22);
    d= agregar(d,2);
    print_conjunto(d);


    e=_union(c,d);
    print_conjunto(e);


    return 0;
}