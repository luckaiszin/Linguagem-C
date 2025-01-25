#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int i;

    if (n == 1) {
    printf("1 nao eh primo\n");
    return 0;
    }


    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d nao eh primo", n);
            return 0;
        }
    }

    printf("%d eh primo", n);

    return 0;
}