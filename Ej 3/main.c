#include <stdio.h>
#include <string.h>

// definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// función para copiar una estructura Estudiante
struct Estudiante copiarEstudiante(struct Estudiante est) {
    struct Estudiante nuevoEst;

    // copiar valores de la estructura original a la nueva
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;

    // devolver la nueva estructura
    return nuevoEst;
}

int main() {
    // crear una instancia de la estructura Estudiante
    struct Estudiante estudianteOriginal;
    strcpy(estudianteOriginal.nombre, "Juan");
    estudianteOriginal.edad = 20;
    estudianteOriginal.promedio = 8.5;

    // llamar a la función para copiar la estructura
    struct Estudiante estudianteCopia = copiarEstudiante(estudianteOriginal);

    // imprimir los valores de la estructura original y la copia
    printf("Original: %s, %d, %.2f\n", estudianteOriginal.nombre, estudianteOriginal.edad, estudianteOriginal.promedio);
    printf("Copia: %s, %d, %.2f\n", estudianteCopia.nombre, estudianteCopia.edad, estudianteCopia.promedio);

    return 0;
}
