#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int calculo;
    float valor;
    float conversor;

    do
    {
    printf("selecione a conversão desejada:\n");
    printf("digite 1 de quilômetros para milhas\n");
    printf("digite 2 de celsius para fahrenheit\n");
    printf(" digite 0 para finalizar\n");
    scanf("%d", &calculo);

    switch (calculo)
    {
    case 1:
        printf("digite em quilômetros: ");
        scanf("%f", &valor);
        conversor = valor * 0.621371;
        printf(" valor convertido em milhas equivale a : %.2f\n", conversor);
        break;

    case 2:
        printf("digite em graus celsius: ");
        scanf("%f", &valor);
        conversor = (valor * 9/5) + 32;
        printf("o valor convertido em fahrenheit equivale a : %.2f\n", conversor);
        break;

    default:
        printf("operação finalizada.");
        break;
    }
    } while (calculo != 0);

    return 0;
}