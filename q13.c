#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");
int n1;
int n2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);

    printf("digite o segundo numero inteiro: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        printf("%d e  maior que  %d .\n", n1, n2);
    } else if (n2 > n1) {
        printf("%d e maior que  %d .\n", n2, n1);
    } else {
        printf("os numeros sao iguais.\n");
    }

    return 0;
}