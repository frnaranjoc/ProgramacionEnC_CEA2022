#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //declarar variables
    float examen = 0.0; //30% de la calificacion final
    float prueba = 0.0; //30% de la calificacion final
    float participa = 0.0; //10% de la calificacion final
    float tareas = 0.0; //30% de la calificacion final
    float total = 0.0; //calificacion final
    float asistencia = 0.0; //porcentaje de asistencia
    printf("Programa para calcular tu nota final!\n");
    printf("Ingrese la calificacionen del examen sobre 10: ");
    scanf("%f",&examen);
    total = total + (examen * 0.3);
    printf("Ingrese la nota de la prueba sobre 10: ");
    scanf("%f",&prueba);
    total = total + (prueba * 0.3);
    printf("Ingrese la nota de tareas sobre 10: ");
    scanf("%f",&tareas);
    total = total + (tareas * 0.3);
    printf("Ingrese la nota de participacion sobre 10: ");
    scanf("%f",&participa);
    total = total + (participa * 0.1);
    //ingresar el % de asistencia
    printf("Ingresa el numero de faltas que tienes en el semestre: ");
    scanf("%f",&asistencia);
    asistencia = ((asistencia * 2) / (4 * 16)) * 100;
    printf("\nTu %% de inasistencia es de: %f",asistencia);
    //imprimir el total
    printf("\nTu nota alcanzada es: %f",total);
    //evalular si va a supletorio
    if(total >= 7.0 && asistencia < 30)
    {
        printf("\nAprobado con las justas\n");
    }
    else if(total >= 8.0 && asistencia < 30)
    {
        printf("\nAprobado con dignidad\n");
    }
    else if(total >= 9.0 && asistencia < 30)
    {
        printf("\nBien hecho has aprobado\n");
    }
    else if(total == 10 && asistencia < 30)
    {
        printf("\nBien copiado, Aprobado con meritos\n");
    }
    else if((total < 7.0 && total >= 5.5) && asistencia < 30)
    {
        printf("\nEstudia aun tienes una oportunidad. El supletorio es todo\n");
    }
    else if(total < 5.5 || asistencia >= 30.0)
    {
        printf("\nTienes una segunda oportunidad. Nueva matricula\n");
    }
    /*
    else if(asistencia >= 30)
    {
        printf("No cumples con el minimo de asistencia. Deja la farra\n");
    }
    */
    getch();
    return 0;
}
