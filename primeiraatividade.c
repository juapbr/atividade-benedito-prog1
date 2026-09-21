#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    int contador;

    printf("Digite quantas temperaturas gostaria de verificar em Fahrenheit: ");
    scanf("%d", &contador);

    while (contador > 0) {
            printf("Digite a temperatura em celsius: ");
            scanf("%f", &celsius);
            fahrenheit = celsius * 1.8 + 32;
            printf("a temperatura em fahrenheit é: %f \n", fahrenheit);
            contador -= 1;
    }
}


#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    int contador;

    printf("Digite quantas temperaturas gostaria de verificar em Fahrenheit: ");
    scanf("%d", &contador);

    for (contador; contador > 0; contador--) {
            printf("Digite a temperatura em celsius: ");
            scanf("%f", &celsius);
            fahrenheit = celsius * 1.8 + 32;
            printf("a temperatura em fahrenheit é: %f \n", fahrenheit);
    }
}


#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    int contador;

    printf("Digite quantas temperaturas gostaria de verificar em Fahrenheit: ");
    scanf("%d", &contador);

    do
    {
            printf("Digite a temperatura em celsius: ");
            scanf("%f", &celsius);
            fahrenheit = celsius * 1.8 + 32;
            printf("a temperatura em fahrenheit é: %f \n", fahrenheit);
            contador -= 1;
    }while (contador > 0)
}


#include <stdio.h>

int main()
{
    float celsius, fahrenheit, somador;
    int contador, contadortemp;

    printf("Digite quantas temperaturas gostaria de verificar em Fahrenheit: ");
    scanf("%d", &contador);

    for (contador; contador > 0; contador--) {
            printf("Digite a temperatura em celsius: ");
            scanf("%f", &celsius);
            fahrenheit = celsius * 1.8 + 32;
            if (fahrenheit < 175) {
                printf("a temperatura em fahrenheit é: %f \n", fahrenheit);
            }
            else {
                printf("A temperatura em fahrenheit é: %f. Temperatura muito alta! \n", fahrenheit)
                contadortemp =+ 1
            }
            Somador += fahrenheit
    }

}