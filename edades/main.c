#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //variables
    int edad = 0;

    printf("Bienvenido!\n");
    printf("Ingrese su edad: ");
    scanf("%d",&edad);
    //condiciones anidadas
    if(edad <= 5 && edad >= 0)
    {
        printf("Es un bebe\n");
    }
    else if(edad <= 11 && edad > 5)
    {
        printf("Es un nin%c\n",64);
    }
    else if(edad <= 17 && edad > 11)
    {
        printf("Es un adolescente\n");
    }
    else if(edad <= 30 && edad >= 18)
    {
        printf("Adulto joven\n");
    }
    else if(edad > 30 && edad < 65)
    {
        printf("Es un adulto\n");
    }
    else if(edad >= 65)
    {
        printf("Es un adulto mayor\n");
    }
    else
    {
        printf("Edad no valida\n");
    }
    getch();
    return 0;
}
