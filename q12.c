#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
    int i;
    float nota;
    int notas;
    float soma = 0;
    float media;

    printf("digite sua notas: ");
    scanf("%d", &notas);

    for (i = 1; i <= notas; ++i)
    {
        printf("informe a  %d nota: ", i);
        scanf("%f", &nota);

        soma += nota;
    }

    media = soma / notas;

    printf(" media : %.2f\n", media);

    return 0;
}