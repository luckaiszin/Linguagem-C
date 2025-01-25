#include <stdio.h>

int main (){

int n;
scanf("%d",&n);
int i=1;
int par=0;
int impar=0;

    while(n>0){
        int v;
        scanf("%d",&v);
        if(v%2==0) par++;
        else impar++;
        n--;
    }

    printf("pares: %d\n", par);
    printf("impares: %d",impar);
    return 0;
}