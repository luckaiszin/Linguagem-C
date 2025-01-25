#include<stdio.h>

int main ()
{
    int i;
    int n=1;
    scanf("%d,", &i);

    if(i!=0)
    {
        printf("%d", n);
    }


    while(i>1)
    {
        n=n+2;
        i--;
        printf(",%d",n );
    }

    return 0;
}