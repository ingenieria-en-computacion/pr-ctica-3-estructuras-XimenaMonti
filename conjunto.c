#include "conjunto.h"  //para agregar archivos , colocar " "
#include<stdio.h>

CONJUNTO conjunto_vacio(){
    CONJUNTO c;
    c.cant=0; //cantidad de elementos guardados
    return c;
}

CONJUNTO agregar(CONJUNTO c,DATO d){
    conjunto t = c;
    if(!pertenece (t,d)&& t.cant<TAM){ // si no pertenence al conjunto y el numero de elemento es menor al tamaño 
      t.datos[t.cant] =d; 
        }
        return t;
}

bool pertenece(CONJUNTO c,DATO d){
    if(!es_vacio(c)){// si c esta vacio
       for(int=0; i<c.cant;i++){
         if(c.datos[i]==d)return false;
       }
    }
    return true;
}

CONJUNTO quitar(CONJUNTO c,DATO d){
    CONJUNTO t = c;
    int i=0;//for(;;;)
    if(pertenece(t,d)){
        for(;i<t.cant;i++){
            if(t.datos[i]==d)//cuando se rompe el ciclo, i va a tomar el ùlrtimo valor
        }
            if(i!t.cant-1){
            for(int j=i+1; j<t.cant;j++){
                t.datos[i-1]=t.datos[i];// i es el indice del dato que queremos borrar
             
             }
            
            }
            
            t.cant--;
        }  
    return t;
}

bool es_vacio(CONJUNTO){
    return c.cant==0;// retornara el resultado de evaluar esa expresiòn(true or false)

}

int cardinal(CONJUNTO){
    return c.cant;
}

CONJUNTO union(CONJUNTO c,CONJUNTO d){
    CONJUNTO t = c;
    for(int i=0; i<d.cant;i++){
           t= agregar t.datos[i]; 
    }return t;
}

print_conjunto(CONJUNTO c){
    printf ("{ ");
    for(int i=0;i<c.cant;i++){
        printf("%d,c.datos[i]");
    }
    printf("}\n");
}
