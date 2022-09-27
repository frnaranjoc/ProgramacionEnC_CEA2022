#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int minusculas = 97;
    int mayusculas = 65;
    printf("\tAbecedario\n");
    printf("Minusculas: \n");
    for(minusculas = 97; minusculas <= 122; minusculas++)
    {
        printf("%c\t",minusculas);
    }
    printf("\nMayusculas: \n");
    for(mayusculas = 65; mayusculas <= 90; mayusculas++)
    {
        printf("%c\t",mayusculas);
    }
    return 0;
}
