#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int i;
    int p;
    int q;
    scanf("%d",&q);

    for(i=1;i<N;i++){
        scanf("%d",&p);

        while(q%p!=0){
        int resto=q%p;
        q=p;
        p=resto;}
        q=p;
    }
    
    printf("MDC: %d",q);
    return 0;
}