#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// definicion de estructura estudiante

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

//funciones para la aplicacion
void agregarEstudiante(struct Estudiante *lista, int *numEstudiantes);
void verEstudiantes(struct Estudiante *lista, int numEstudiantes);
void eliminarEstudiante(struct Estudiante *lista, int *numEstudiantes);

int main() {
    //instanciacion de estructuras
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

    //instanciacion con el operador malloc
    struct Estudiante *estudiante2 = (struct Estudiante *)malloc(sizeof(struct Estudiante));
    strcpy(estudiante2->nombre, "Maria");
    estudiante2->edad = 22;
    estudiante2->promedio = 9.0;

    //Punteros y estructuras
    struct Estudiante *ptrEstudiante;
    struct Estudiante estudiante3;
    ptrEstudiante = &estudiante3;
    strcpy(ptrEstudiante->nombre, "Carlos");
    ptrEstudiante->edad = 21;
    ptrEstudiante->promedio = 8.0;

    //organizacion de la programacion
    struct Estudiante *listaEstudiantes;
    int numEstudiantes = 0;
    listaEstudiantes = (struct Estudiante *)malloc(sizeof(struct Estudiante) * 100);

    // logica de la aplicacion
    //liberar la memoria asignada

    free(estudiante2);
    free(listaEstudiantes);

    return 0;
}

//implementacion de las funciones
void agregarEstudiante(struct Estudiante *lista, int *numEstudiantes) {
    //codigo para añadir un estudiante a la lista
}

void verEstudiantes(struct Estudiante *lista, int numEstudiantes) {
    //codigo para ver la lista de estudiantes
}

void eliminarEstudiantes(struct Estudiantes *lista, int *numEstudiantes) {
    //codigo para eliminar un estudiante de la lista
}