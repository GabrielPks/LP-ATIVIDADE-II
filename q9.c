#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL, "portuguese");
int numero;
int i; 
int primo = 1; 

   
    printf("Digite o numero : ");
    scanf("%d", &numero);

    for (i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            primo = 0; 
            break;
        }
    }

    if (primo) 
    {
        printf(" e primo \n");
    } else 
    {
        printf("nao e primo \n");
    }

    return 0;
}