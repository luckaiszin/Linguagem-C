#include <stdio.h>

int main (){
    int n;
    int i=0;
    int p=0;
    int soma=0;

    printf("numeros pares:");
    scanf("%d", &n);

    while(i<n-1){
        int p=0;
        p=i+2;
        soma=soma+p;
        i=i+2;

    }
        printf("soma: %d", soma);
    return 0;
}