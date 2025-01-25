#include <stdio.h>

int main (){

    int n;
    scanf("%d",&n);
    int d;
    scanf("%d",&d);
    int c=0;
    int k=n;

    while(n!=0)
    {
        if(n%10==d) c++;
            n=n/10;
    }

    printf("%d aparace %d vezes em %d", d,c,k );
    return 0;
}