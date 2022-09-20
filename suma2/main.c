#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //declarar variables
    float sumando1 = 3.17;
    float sumando2 = 7.14;
    float resultado = 0.0;
    //tambien se puede declarar como:
    //float sumando1 = 0.0, sumando2 = 0.0, resultado = 0.0;

    //TODO ingresar valores por el usuario

    printf("Programa para sumar dos numeros con decimales!\n");
    //sumar los numeros
    resultado = sumando1 + sumando2;
    printf("El resultado de la suma de %f y %f es: %f\n",sumando1,sumando2,resultado);
    getch();
    return 0;
}
