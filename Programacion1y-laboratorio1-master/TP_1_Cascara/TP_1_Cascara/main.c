#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{
    char seguir='s';
    int opcion=0;
    float num1 = 0;
    float num2 = 0;
    int retorno;


    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n", num1);
        printf("2- Ingresar 2do operando (B=%.2f)\n", num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);
        while (opcion <1 || opcion >9){

            printf("La opcion elegida es inválida, por favor reingrese la opción deseada\n");
            scanf("%d",&opcion);
        }

        switch(opcion)
        {
            case 1:
                scanf("%f", &num1);
                break;
            case 2:
                scanf("%f", &num2);
                break;
            case 3:
                Suma(num1, num2);

                break;
            case 4:
                Resta(num1, num2);

                break;
            case 5:
                while(num2 == 0){
                printf("No se puede dividir por 0, Por favor reingrese un 2do operando\n");
                scanf("%f", &num2);
                    }
                Division(num1, num2);
                break;
            case 6:
                break;
            case 7:
                Factorial(num1);

                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}

float Suma(float num1, float num2)
{
    float retorno;
    retorno = num1 + num2;
    printf(" La Suma es : %.2f\n", retorno);
}

float Resta(float num1, float num2)
{
    float retorno;
    retorno = num1 - num2;
    printf(" La Resta es : %.2f\n", retorno);
}

float Division(float num1, float num2)
{
    float retorno;
    retorno = num1 / num2;
    printf(" La Division es : %.3f\n", retorno);
}
float Factorial(float num1)
{   float factorial = 1;
    float i = num1;
    for (; i>=1; i--)
    {
        factorial = factorial * i;

    }
    printf(" El factorial del numero A es: %f\n", factorial);

}
