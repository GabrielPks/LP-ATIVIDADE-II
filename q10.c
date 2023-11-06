#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ()
{

setlocale(LC_ALL, "portuguese");
int n1; 
int n2;
int total=0;
int calculo ; 

printf ("digite o numero: ");
scanf ("%d", &n1);

printf ("digite o numero: ");
scanf ("%d", &n2);

printf ("forma de calculo 1 para + e 2 para -");
scanf ("%d", &calculo);

switch (calculo)
{
case 1:
    total = n1 + n2;
    printf ("total: %d", total);
    break;

case 2:
total = n1 - n2; 
printf ("total: %d", total);
    break;
}
    return 0;
}