#include <stdio.h>

int main() {
    char *ap, c = 'a'; 
    ap = &c; // Asignamos la dirección de 'c' al apuntador

    // %c obtiene el carácter
    printf("Carácter: %c\n", *ap); 

    // %d obtiene el valor numérico (ASCII)
    printf("Código ASCII: %d\n", *ap); 

    // %p es el formato correcto para imprimir direcciones de memoria (punteros)
    printf("Dirección de memoria: %p\n", (void*)ap);

    return 0;
}
