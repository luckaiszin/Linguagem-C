#include <stdio.h>

int main() {
  int n;    
  int i=0;     
  int impar=1; 
  
  scanf("%d", &n);
  
  
    while (i < n) {
    printf (",%d", impar);
    impar = impar + 2; 
    i = i + 1;
  }
  
  return 0;
}

