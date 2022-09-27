#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{//variables
    int i = 0, j = 0;
    printf("Patron Simple 1\n");
    for(i = 1; i <= 10; i++)//filas
    {
        for(j = 1;j <= 10; j++)//columnas
        {
            printf("X");
        }
        printf("\n");
    }
    getch();
    return 0;
}
