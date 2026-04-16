#include <stdio.h>

int main() {
    int lista[10]; 
    int indice = 0;
    int numeroElementos = 0;

    printf("\nDa un número entre 1 y 10 para la cantidad de elementos: ");
    scanf("%d", &numeroElementos);

    if ((numeroElementos >= 1) && (numeroElementos <= 10)) {
        
        // --- Bloque de entrada de datos ---
        for (indice = 0; indice <= numeroElementos - 1; indice++) {
            printf("Dar un número entero para el elemento %d: ", indice);
            scanf("%d", &lista[indice]);
        }

        printf("\nLos valores dados son: \n");

        // --- Bloque de salida de datos ---
        for (indice = 0; indice <= numeroElementos - 1; indice++) {
            printf("%d  ", lista[indice]);
        }

    } else {
        printf("El valor dado no es válido.");
    }

    printf("\n");
    return 0;
}
