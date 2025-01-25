#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);
    int i;
    int seed;
    scanf("%d",&seed);
    printf("%d\n", N);
    for (i = 0; i < N; ++i) {
    printf("%.16f ", (double)rand()/RAND_MAX);
    printf("%.16f\n", (double)rand()/RAND_MAX);
  }
  
  
  return 0;
}

