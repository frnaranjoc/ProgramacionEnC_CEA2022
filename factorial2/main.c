#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //variables
    int numero = 0, factorial = 1;
    int temp = 0;
    printf("Factorial de un n%cmero!\n",163);
    printf("Ingrese un n%cmero: ",163);
    scanf("%d",&numero);
    temp = numero;
    do{
        //TODO codigo
        factorial = factorial * numero;
        numero--;
    }
    while(numero >= 1);
        printf("El factorial de %d es: %d",temp,factorial);
    getch();
    return 0;
}
