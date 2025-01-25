#include <stdio.h>

int main()
{

    int N;
    int i;
    scanf("%d", &N);

    double HM = 0.0;

    for (i = 1; i <= N; i++)
    {
        
        HM = HM + 1.0/i;
    }

    printf("Media harmonica %d termos = %f", N, HM);

    return 0;
}