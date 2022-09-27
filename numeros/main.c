#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    printf("Imprimir los numeros de 1 al 100 y del 100 al \n");
    //for(int i = 1;i <= 100;i++)printf("%d  ",i);
    for(int i = 1; i <= 100; i++)
    {

        printf("%d  ",i);
    }
    for(int i = 100; i >= 1; i--)
    {
        printf("%d  ",i);
    }
    getch();
    return 0;
}
