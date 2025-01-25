#include <stdio.h>

int main ()
{
    int n;
    int a=1;

    scanf("%d", &n);


    while(n>0){
        printf("%d\n", a);
        a=a+2;
        n--;
    }

}