#include <stdio.h>

int main() {
    int a = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0};
    int *apEnt;

    apEnt = &a; // El apuntador guarda la dirección de 'a'

    printf("a = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0}\n");
    printf("apEnt = &a\n");

    // b toma el valor de 'a' a través del apuntador
    b = *apEnt;
    printf("b = *apEnt \t-> b = %i\n", b);

    // b toma el valor de 'a' + 1
    b = *apEnt + 1;
    printf("b = *apEnt + 1 \t-> b = %i\n", b);

    // Modificamos 'a' usando el apuntador
    *apEnt = 0;
    printf("*apEnt = 0 \t-> a = %i\n", a);

    // Apuntamos al primer elemento del arreglo
    apEnt = &c[0];
    printf("apEnt = &c[0] \t-> *apEnt = %i\n", *apEnt);

    return 0;
}
