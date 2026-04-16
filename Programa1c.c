#include <stdio.h>

int main() {
    int lista[5] = {10, 8, 5, 8, 7};
    int indice; // No hace falta inicializarla aquí, el for lo hará

    printf("\tLista\n");

    // Todo el control está concentrado en esta línea
    for (indice = 0; indice < 5; indice++) {
        printf("\nCalificación del alumno %d es %d", indice + 1, lista[indice]);
    }

    printf("\n");
    return 0;
}
