#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //declaracion de variables
    int sumando1 = 10;
    int sumando2 = 20;
    int resultado = 0;
    //int sumando1 = 0, sumando2 = 0, resultado = 0;
    //TODO ingresar valores por el usuario
    printf("Programa para sumar dos numeros!\n");
    resultado = sumando1 + sumando2;
    printf("La suma de los numeros %d y %d es: %d",sumando1, sumando2,resultado);
    getch();
    return 0;
}
