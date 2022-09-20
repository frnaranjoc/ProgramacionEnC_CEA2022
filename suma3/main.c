#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //declarar variables
    float sumando1 = 0.0f;
    float sumando2 = 0.0f;
    float resultado = 0.0f;
    printf("Programa para sumar dos numeros con decimales!\n");
    //ingresar valores desde la consola
    printf("Ingrese el primer valor: ");
    scanf("%f",&sumando1);
    printf("Ingrese el segundo valor: ");
    scanf("%f",&sumando2);
    //realizar la suma
    resultado = sumando1 + sumando2;
    printf("La suma de %f y %f es: %f",sumando1,sumando2,resultado);
    getch();
    return 0;
}
