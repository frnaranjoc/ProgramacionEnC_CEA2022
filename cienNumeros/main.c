#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //variables
    int numero = 0;
    printf("Los n%cmeros del 1 al 100 son:\n",163);
    for(numero = 1; numero <= 100; numero++)
    {
        printf("%d\t",numero);
    }
    getch();
    return 0;
}
