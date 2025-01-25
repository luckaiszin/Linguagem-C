#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);

    int f;

    for( f=1 ; n>0 ; n--)
    {

        f=f*n;
       
    }

    printf("%d", f);
    return 0;
}