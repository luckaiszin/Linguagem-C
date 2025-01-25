#include <stdio.h>

int main (){

    int n;
    scanf("%d",&n);

    int i;
    int soma=0;

    for(i=1;i<n;i++){

        if(n%i==0) 
        soma = soma +i;

    }
    if(soma==n) printf("%d eh um numero perfeito", n);
    else printf("%d nao eh um numero perfeito", n);

    return 0;
}