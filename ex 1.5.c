#include <stdio.h>

int main ()
{
    printf("MARCO VENDAS\n");
    int i=0;
    int v;
    int maior=0;
    int dia;

    while(i<31){
        printf("Dia %d: ", i+1);
        scanf("%d", &v);
        if(v>maior){
            maior=v; 
            dia=i+1;}
        i++;
    }
        printf("melhor dia: %d\n", dia);
        printf("maior venda: %d", maior);
    return 0;
}