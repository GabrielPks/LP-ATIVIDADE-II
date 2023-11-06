#include <stdio.h>
#include <locale.h>



int main(){

int idade;

printf ("digite sua idade");
scanf ("%d", &idade);

if (idade >= 18)
{
  printf ("Acesso permitido");
}
else
{
   printf ("Acesso negado"); 
}


    return 0;

}