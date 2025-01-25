#include <stdio.h>

int main (){
    int N;
    scanf("%d",&N);

    int i=0;

    while(N!=0){

        N=N/10;
        i++;
    }

    printf("Digitos:%d", i);
    return 0;
}