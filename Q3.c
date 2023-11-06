#include <stdio.h>
#include <locale.h>



int main ()
{
float nota;
char claudio [250];


printf ("Digite sua Nota: ");
scanf ("%f", &nota);

if (nota >= 9)
{
	strcpy (claudio,"EXCELENTE");
}
else if (nota >=7 && nota <= 9) 
{
strcpy (claudio,"BOM");
}

else if(nota >=5 && nota <= 7) 
{
strcpy (claudio,"RAZOAVEL");
}

else
{
	strcpy (claudio,"INSUFICIENTE");
}

printf ("CLASSIFICAÇÃO DA NOTA: %s", claudio);



    return 0;
}