#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int idioma;

    printf("1 - English \n");
printf("2 - Francais \n");
printf("3 - Espanol \n");
scanf("%d", &idioma);
    scanf ("%d", &idioma);

    if (idioma == 1) {
        printf ("Welcome!");
    }
    else if (idioma == 2) {
        printf ("Bienvenido!");
    }
    else if (idioma == 3) {
        printf ("Accueillir!");
    }

    return 0;
}