
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float desconto;
    float valor;
 float valor2;
int dia;

printf("valor:");
scanf("%f", &valor);

printf("digite 1 para dias uteis e 2 para fim de de semana:");
scanf ("%d", &dia);

switch(dia ){
case 1:
	if(valor >= 100)
	{
		desconto = valor * 0.10;
		valor2 = valor - desconto;
		printf("valor total: %f",valor2);
	}
	else
	{
		printf("valor total: %f", valor );
	}	
break;
case 2:
	if (valor > 100){
		desconto = valor * 0.15;
		valor2 = valor-desconto;
		printf("valor total: %f",valor2);
	}
	else
	{
	printf("valor total: %f", valor);
	}break;
	}


return 0;
}
