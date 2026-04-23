#include <stdio.h>

int main()
{
    char palabra[20];
    char *p; // Declaramos un puntero a char

    printf("Ingrese una palabra: ");
    scanf("%s", palabra); 

    printf("La palabra ingresada es: %s\n", palabra);

    // Inicializamos p al inicio del arreglo
    p = palabra; 

    // Recorremos hasta encontrar el carácter de fin de cadena '\0'
    printf("Letra por letra:\n");
    while (*p != '\0') 
    {
        printf("%c\n", *p);
        p++; // Movemos el puntero a la siguiente letra
    }

    return 0;
}
