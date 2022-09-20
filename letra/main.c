#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //declarar una variable tipo caracter
    char letra = ' ';
    //declarar una varibla tipo cadena de caracteres
    char cadena[20] = " ";
    printf("Programa para ingresar una letra!\n");
    printf("Ingrese una letra: ");
    scanf("%c",&letra);
    printf("La letra ingresada es: %c y equivale a: %d",letra,letra);
    printf("\nIngrese su nombre: ");
    scanf("%s",&cadena);
    fflush(stdin);
    printf("Hola %s\n",cadena);
    printf("Ingrese su nombre completo: ");
    gets(cadena);
    printf("Mucho gusto %s",cadena);
    getch();
    return 0;
}
