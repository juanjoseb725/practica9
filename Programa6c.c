#include <stdio.h>

int main ()
{
    int lista[5] = {10, 8, 5, 8, 7};
    int *ap = lista; // Apunta al inicio (al 10)
    int n = 1;       // Solo para el contador del "Alumno 1, 2..."

    printf("\tLista (Modo Puntero Pro)\n");

    // Mientras el puntero no se pase del final del arreglo
    while (ap < lista + 5)
    {
        // *ap++ hace dos cosas: 
        // 1. Obtiene el valor donde está parado el puntero.
        // 2. Mueve el puntero a la siguiente posición de memoria.
        printf("\nCalificación del alumno %d es %d", n, *ap++);
        n++;
    }

    printf("\n");
    return 0;
}
