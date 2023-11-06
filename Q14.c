#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ()
{
setlocale(LC_ALL, "portuguese");
int numero; 
int contaP = 0; 
int contaI = 0; 
int somaP = 0; 
int somaI = 0;

    while (1) {
        printf("Digite um numero inteiro, ou digite um numero negativo para parar: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        if (numero % 2 == 0) {
            contaP++;
            somaP += numero;
        } else {
            contaI++;
            somaI += numero;
        }
    }

    float mediaP = (contaP > 0) ? (float)somaP / contaP : 0;
    float mediaI = (contaI > 0) ? (float)somaI/ contaI : 0;

    printf("quantidade de numeros pares: %d\n", contaP);
    printf("quantidade de numeros impares: %d\n", contaI);
    printf("media dos numeros pares: %.2f\n", mediaP);
    printf("media dos numeros impares: %.2f\n", mediaI);

    return 0;
}