#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int numero = 0, factorial = 1;
    printf("Factorial de un numeros!\n");
    printf("Ingrese un numero: ");
    scanf("%d",&numero);
    for(int i = 1; i <= numero; i++)
    {
        factorial = factorial * i;
    }
    printf("El factorial de %d es: %d",numero,factorial);
    getch();
    return 0;
}
