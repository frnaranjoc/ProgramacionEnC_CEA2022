#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //variables
    int decimal = 0;
    printf("Bienvenid@!\n");
    printf("Ingrese un numero del 1 al 10: ");
    scanf("%d",&decimal);
    if(decimal >= 1 && decimal <= 10)
    {
        switch(decimal)
        {
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
            case 10: printf("X\n");
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
