#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    //declarar variables
    float numero1 = 0.0, numero2 = 0.0, resultado = 0.0;
    printf("Programa para realizar las operaciones b%csicas!\n",160);
    //ingresar valores
    printf("Ingrese el primer valor: ");
    scanf("%f",&numero1);
    printf("Ingrese el segundo valor: ");
    scanf("%f",&numero2);
    //suma
    resultado = numero1 + numero2;
    printf("la suma es igual: %f\n",resultado);
    //resta
    resultado = numero1 - numero2;
    printf("la resta es igual: %f\n",resultado);
    //multiplicacion
    resultado = numero1 * numero2;
    printf("el producto es: %f\n",resultado);
    //division
    resultado = numero1 / numero2;
    printf("la division es: %f\n",resultado);
    //potenciacion
    resultado = pow(numero1,numero2);
    printf("la potencia es: %f\n", resultado);
    getch();
    return 0;
}
