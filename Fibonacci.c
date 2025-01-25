#include <stdio.h>

int main (){

    int n;
    scanf("%d",&n);

    int Fn  = 0;
    int Fn1 = 0;
    int Fn2 = 1;

    int i = 0;


    for(;i<n;i++){

        Fn = Fn1+Fn2;
        Fn2=Fn1;
        Fn1=Fn;

    }
 
  printf("o %d termo da sequencia eh %d", n,Fn);

    return 0;
}