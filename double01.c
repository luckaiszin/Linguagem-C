int main()
{

    int N;
    int i;
    double x;
    double soma = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%lf", &x);
        soma = soma + x;
    }

    printf("Media aritmetica: %.2f\n", soma / N);

    return 0;
}