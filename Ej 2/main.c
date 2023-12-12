#include <stdio.h>
#include <string.h>

//definicion de la union dato
union Dato {
    int i;
    float f;
    char str[20];
};

int main() {

    //crear una variable de la union dato
    union Dato dato;

    //asignar diferentes tipos de valores y ver como se comporta
    dato.i = 10;
    printf("dato.i: %d\n", dato.i);

    dato.f = 220,5;
    printf("dato.f: %.2f\n, dato.f");

    strcpy(dato.str, "C programming");
    printf("dato.str: %s\n", dato.str);

    // el valor de las uniones se sobrescribe, solo se puede acceder a la ultima asignacion
    printf("dato.i despues de asignar una cadena: %d\n", dato.i);

    return 0;
}