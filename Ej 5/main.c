#include <stdio.h>
#include <string.h>

// definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// pasar una estructura por valor como argumento
void imprimirEstudiantePorValor(struct Estudiante est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}

// pasar una estructura por referencia como argumento
void modificarEstudiantePorReferencia(struct Estudiante *est) {
    est->edad = 30;
}

// pasar una estructura por dirección como argumento
void imprimirEstudiantePorDireccion(struct Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}

int main() {
    // crear una instancia de la estructura Estudiante
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

    // llamar a la función para imprimir la estructura por valor
    imprimirEstudiantePorValor(estudiante1);

    // llamar a la función para modificar la estructura por referencia
    modificarEstudiantePorReferencia(&estudiante1);

    // llamar a la función para imprimir la estructura por dirección
    imprimirEstudiantePorDireccion(&estudiante1);

    return 0;
}
