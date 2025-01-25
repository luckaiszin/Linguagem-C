#include <stdio.h>

int main()
{

    double x;
    scanf("%lf", &x);
    double epsilon = 0.0000048;
    double soma = 0;
    double termo = 1;
    int i = 1;

    while (termo >= epsilon)
    {

        soma = soma + termo;
        termo = termo * (x / i);
        i++;
       
    }

    printf("e^%.1f = %f", x, soma);

    return 0;
}

/* #include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  double x = atof(argv[1]), epsilon = atof(argv[2]), s, p;
  int k = 1;

  s = p = 1.0;
  while (p <= -epsilon || p >= epsilon) {
    p *= x/k;
    k++;
    s += p;
  }

  printf("e^%f = %f (epsilon: %f)\n", x, s, epsilon);

  return 0;
} */