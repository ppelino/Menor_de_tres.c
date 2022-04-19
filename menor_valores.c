#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, menor;

    printf("Primeiro valor: ");
    scanf("%d", &a);
    printf("Primeiro valor: ");
    scanf("%d", &b);
    printf("Primeiro valor: ");
    scanf("%d", &c);
    //encontrando o menor
    if (a < b)
    {
        if(a < c)
            menor = a;
        else
            menor = c;
    }

    else
    {
        if(b < c)
            menor = b;
        else
            menor = c;
    }


    printf("Primeira versao\tMenor: %d\n", menor);

           return 0;
}
