#include <stdio.h>

int main() {
    int lista[5] = {10, 8, 5, 8, 7}; 
    int indice = 0;

    printf("\tLista\n");

    do {
        printf("\nCalificación del alumno %d es %d", indice + 1, lista[indice]);
        indice += 1;
    } while (indice < 5); // El punto y coma aquí es obligatorio

    printf("\n");
    return 0;
}
