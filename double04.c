#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    int i;
    double soma = 0;

    for (i = 1; i < N+1; i++)
    {
        soma = soma + ((double)i)/(N+1-i); 
    }

        printf("%f",soma);
    return 0;
}