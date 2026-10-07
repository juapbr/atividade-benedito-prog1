#include <stdio.h>

int main()
{
    int contador;
    float termo1, termo2, operacao;

    termo1 = 1.0;
    termo2 = 2.0;

    operacao = termo1 / termo2;
    printf("a divisao desses é %lf \n", &operacao);
}