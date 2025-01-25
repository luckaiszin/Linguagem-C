#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int n;
    printf("Digite N: ");
    scanf("%d",&n);

    int i=0;

        while(i<n){
            int v;
            v=(i-1)*i*(i+1);
            if(v==n){
                printf("%d eh p3ic", v);
                return 0;
            }
            i++;
        }
             printf("%d nao 'e p3ic\n", n);
    return 0;
}