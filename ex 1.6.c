#include <stdio.h>

int main ()
{
    int n;
    int i=0;
    int maior=0;
    int menor=100;

    printf("Quantidade de alunos:");
    scanf("%d", &n);

    while(i<n){
        int notas;
        scanf("%d", &notas);
        if(notas>maior) maior=notas;
        if(notas<menor) menor=notas;

        i++;
    }
        printf("Maior nota: %d\n", maior);
        printf("Menor nota: %d\n", menor);

    return 0;
}