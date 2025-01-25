#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N;
    scanf("%d", &N);
    int i;
    double x;
    double y;
    for(i=0;i<N;i++){
    scanf("%lf , %lf",&x,&y);
    

    if(x>=0 && x<=1 && y>=0 && y<=1) printf("(%.2f,%.2f) pertence a H\n",x,y);
    else  printf("(%.2f,%.2f) nao pertence a H\n",x,y); 
    }



    return 0;
} 


