#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //declarar variables
    int diaA = 0, mesA = 0, anioA = 0; //fecha Actual
    int diaN = 0, mesN = 0, anioN = 0; //fecha Nacimiento
    int dias = 0, meses = 0, anios = 0; //edad calculada
    //leer fecha de nacimiento
    printf("Bienvenido!\nIngrese su fecha de nacimiento: \n");
    printf("Ingrese el d%ca de nacimiento: ",161);
    scanf("%d",&diaN);
    printf("Ingrese el mes de nacimiento: ");
    scanf("%d",&mesN);
    printf("Ingrese el a%co de nacimiento: ",164);
    scanf("%d",&anioN);
    //leer fecha actual
    printf("Ingrese la fecha actual: \n");
    printf("Ingrese el d%ca actual: ",161);
    scanf("%d",&diaA);
    printf("Ingrese el mes actual: ");
    scanf("%d",&mesA);
    printf("Ingrese el a%co actual: ",164);
    scanf("%d",&anioA);
    //TODO verificar valores validos dia, mes, año

    //calcular fecha de nacimiento
    //dias de nacido
    if(diaA < diaN)
    {
        mesA = mesA - 1;
        diaA = diaA + 30;
    }
    dias = diaA - diaN;
    //meses de nacido
    if(mesA < mesN)
    {
        anioA = anioA - 1;
        mesA = mesA + 12;
    }
    meses = mesA - mesN;
    //anios de nacido
    if(anioA < anioN)
    {
        printf("La fecha de nacimiento no puede ser mayor a la fecha actual!\n");
        exit(-1);
    }
    anios = anioA - anioN;

    //imprimir resultados
    printf("Su edad es: %d d%cas, %d meses, %d a%cos\n",dias,161, meses, anios,164);

    return 0;
}
