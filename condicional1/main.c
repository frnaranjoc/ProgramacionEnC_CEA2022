#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //declarar variables
    int num1 = 0, num2 = 0;
    printf("Programa para verificar dos variables!\n");
    printf("Ingrese el valor de la primera: ");
    scanf("%d",&num1);
    printf("Ingrese el valor de la segunda: ");
    scanf("%d",&num2);
    //condicional IF
    //num1 mayor a num2
    if(num1 > num2)
    {
        printf("%d es mayor a %d",num1,num2);
    }
    //num1 menor a num2
    if(num1 < num2)
    {
        printf("%d es menor a %d",num1,num2);
    }
    //num1 igual a num2
    if(num1 == num2)
    {
        printf("%d es igual a %d",num1,num2);
    }
    getch();
    return 0;
}
