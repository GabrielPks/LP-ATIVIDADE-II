#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <locale.h>


int main() {

    setlocale(LC_ALL, "portuguese");

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    while (numero >= 0) {
            switch (numero) {
            case 0:
            break;
            default:
                printf ("%d\n", numero);
            break;
            }
        numero = numero - 1;
        }

    return 0;
}