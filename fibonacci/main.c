#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //variable
    int a = 0, b = 1, num = 0, c = 0, contar = 0;
    printf("Serie Fibonacci!\n");
    printf("Ingrese el numero de cifras a calcular: ");
    scanf("%d",&num);
    printf("La serie calculada es: ");
    printf("%d\n%d\n",a,b);
    contar = 2;
    while(contar <= num )
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d\n",c);
        contar++;
    }
    getch();
    return 0;
}
