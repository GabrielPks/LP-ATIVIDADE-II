#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ()
{

setlocale(LC_ALL, "portuguese");
 

int roupas; 



printf (" 1- Camisa \n");
 printf ("2- Calça \n");
  printf ("3- Sapato \n ");
scanf ("%d", &roupas);

switch (roupas) 
{

	case 1: 
	printf ("Camisa 25,00 R$ ");
	break;
	case 2:
	printf ("Calça 45,00 R$");
	break; 
	case 3:
		printf ("Sapato 56,00 R$");
	break;
}
	
	

    return 0;
}