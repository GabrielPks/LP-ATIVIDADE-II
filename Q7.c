#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "portuguese");

    int opcao = 0;


 printf("1 - Novo Jogo \n"); 
 printf("2 - Carregar \n ");
 printf("3 - Configurações \n ");

scanf("%i", &opcao);


system("cls || clear");

switch (opcao)
{
case 1:
    
    printf("\n começando jogo...");

    break;
case 2:
printf("caregando progreso ");


break;
case 3: 

printf("abrindo configuração");
default:
    break;
}


return 0;
}