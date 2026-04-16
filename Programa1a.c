#include <stdio.h>

int main() {
    // Declaración e inicialización
    int lista[5] = {10, 8, 5, 8, 7}; 
    int indice = 0;

    printf("\tLista\n");

    // Acceso a cada elemento usando while
    while (indice < 5) {
        printf("\nCalificación del alumno %d es %d", indice + 1, lista[indice]);
        
        // Incremento del índice
        indice += 1; 
    }

    printf("\n");
    return 0;
}
