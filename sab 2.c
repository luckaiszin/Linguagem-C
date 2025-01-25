#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int f;
    int c = 0;
    int x = n;

    for (f = 2; f <= n; f++)
    {
        int c = 0;

        while (x % f == 0)
        {
            x = x / f;
            c++;
        }
        
        if(c!=0)
        printf("fator %d multiplicidade %d\n", f, c);
    }

    return 0;
}