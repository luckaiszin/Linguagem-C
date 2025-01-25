#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int aa=a;
    int b;
    scanf("%d",&b);
    int bb=b;

    while(a%b!=0){
        int resto=a%b;
        a=b;
        b=resto;
    }   
    printf("MDC(%d,%d): %d",aa,bb,b);
    return 0;
}