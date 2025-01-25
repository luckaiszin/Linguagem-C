#include <stdio.h>

int main(){
    int n;
    int f=1;
    int i=0;
    scanf("%d",&n);
    
    int p;
    p=n;

    while(i<n){
        f=f*p;
        p--;
        i++;
    }
        printf("%d", f);

    return 0;
}