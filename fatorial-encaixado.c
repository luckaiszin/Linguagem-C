#include <stdio.h>

int main (){
    int N;
    printf("Numero de elementos da sequencia: ");
    scanf("%d",&N);
    int p;
    

 for (;N>0;N--){
     int f=1;
    scanf("%d",&p);

    for(;p>0;p--){
        f=f*p;
    }
    printf("%d", f);
 }

    return 0;
}