#include <stdio.h>

int main (){

    int n;
    printf("Digite N:");
    scanf("%d",&n);
    int i;
    printf("Digite i:");
    scanf("%d",&i);
    int j;
    printf("Digite j:");
    scanf("%d",&j);

    int c=0;
    int m=0;

    while(c<n){
       
        if(m%i==0 || m%j==0){
            printf("%d\n", m);
            c++;}
            m++;
    }
    return 0;
}