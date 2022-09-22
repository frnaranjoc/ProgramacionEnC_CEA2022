#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //variables
    int decimal = 0;
    int unidad = 0;
    int decena = 0;
    printf("Bienvenid@!\n");
    printf("Ingrese un numero del 1 al 99: ");
    scanf("%d",&decimal);
    if(decimal >= 1 && decimal <= 99)
    {
        unidad = decimal % 10;
        decena = decimal / 10;
        printf("El numero romano equivalente es: ");
        //decenas
        switch(decena)
        {
            case 1: printf("X");
            break;
            case 2: printf("XX");
            break;
            case 3: printf("XXX");
            break;
            case 4: printf("XL");
            break;
            case 5: printf("L");
            break;
            case 6: printf("LX");
            break;
            case 7: printf("LXX");
            break;
            case 8: printf("LXXX");
            break;
            case 9: printf("XC");
            break;
            default: printf(" ");
            break;
        }
        switch(unidad)
        {
            case 0:printf("\n");
            break;
            case 1: printf("I\n");
            break;
            case 2: printf("II\n");
            break;
            case 3: printf("III\n");
            break;
            case 4: printf("IV\n");
            break;
            case 5: printf("V\n");
            break;
            case 6: printf("VI\n");
            break;
            case 7: printf("VII\n");
            break;
            case 8: printf("VIII\n");
            break;
            case 9: printf("IX\n");
            break;
            default: printf("Error %d",decimal);
            break;
        }
    }
    else
    {
        printf("numero fuera de rango\n");
    }
    getch();
    return 0;
}
