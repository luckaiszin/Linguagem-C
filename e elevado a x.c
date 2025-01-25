#include <stdio.h>

int main(){

    double x;
    scanf("%lf",&x);
    double epsilon;
    scanf("%lf",&epsilon);
    double e = 1.0;
    double soma = 1.0;

    for(int i = 1; e>epsilon; i++){
        double k;
        k=(x/i);
        e=e*k;
        soma+=e;
    }

    printf("e^%f = %f", x,soma);


}