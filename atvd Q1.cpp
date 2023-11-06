#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tmp;

    printf("digite a temperatura:");
    scanf("%d", &tmp);
    
    if(tmp >= 25 )
    {
        printf("O clima e ensolarado");
    }
    
    
     if(tmp > 15 && tmp < 25)
    {
        printf("O clima e nublado");
    }
    
    if (tmp <= 15)
    {
    printf("O clima e chuvoso");
    }



return 0;
}

