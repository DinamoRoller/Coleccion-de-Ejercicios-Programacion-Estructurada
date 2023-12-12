#include <stdio.h>
#include <string.h>

// Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Creación de un alias para la estructura Estudiante mediante typedef
typedef struct Estudiante Estudiante;

int main() {
    // Uso del alias para crear una instancia de la estructura Estudiante
    Estudiante estudiante3;
    strcpy(estudiante3.nombre, "Pedro");
    estudiante3.edad = 25;
    estudiante3.promedio = 9.7;

    return 0;
}
