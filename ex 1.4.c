#include <stdio.h>

int main ()
{
    int x,n,v=1;

    printf("Digite X:");
    scanf("%d", &x);
    printf("Digite N:");
    scanf("%d", &n);

    while(n>0){
        v=v*x;
        n--;

    }
    printf("valor: %d", v);
    return 0;
}