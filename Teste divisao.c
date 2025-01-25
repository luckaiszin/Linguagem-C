#include <stdio.h>

int main (){
    int n;
    printf("Digite N:");
    scanf("%d",&n);
    int B;
    printf("Digite divisor:");
    scanf("%d",&B);

        printf("Quociente: %d\n",n/B);
        printf("Resto: %d", n%B);

        return 0;
}