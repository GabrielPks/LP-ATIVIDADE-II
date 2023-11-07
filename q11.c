#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main ()
{

setlocale(LC_ALL, "portuguese");
float codigo; 
do
{
    printf ("Digite o Codigo de Acesso:\n ");
scanf ("%f", &codigo);
if (codigo != 2424)
{
     printf ("Acesso Negado! Tente Novamente!\n"); 
}else {
printf ("Acesso Permitido! ");
}

} while (codigo != 2424 );

    return 0;