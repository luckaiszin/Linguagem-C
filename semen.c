#include <stdio.h>

int main() {

int semente, senha;
int quantidade;
int c;
int t;


int a1,a2,a3,a4,a5;

int b1,b2,b3,b4,b5;

printf("Bem vinda(o) ao Numle\n");

printf("Digite a semente para sortear a senha (0 a 10000): ");

scanf("%d", &semente);

semente = semente % 134456;

senha = ((8121 * semente + 28411) % 134456) % 100000;



printf("Quantidade de tentativas(1 a 10): ");
scanf("%d",&quantidade);

for(c=0; c<quantidade; c++){

    a1=(senha/10000);
    a2=((senha%10000)/1000);
    a3=((senha%1000)/100);
    a4=((senha%100)/10);
    a5=(senha%10);


    printf("Digite a tentativa (0 a 99999): ");
    scanf("%d",&t);
    b1=t/10000;
    b2=(t%10000)/1000;
    b3=(t%1000)/100;
    b4=(t%100)/10;
    b5=t%10; 
    //for(i=5;i>0,i--){}

    if(t==senha){
        printf("Voce acertou! A senha eh de fato %d",senha);
        return 0;
    }
    printf("%d %d %d %d %d\n",a1,a2,a3,a4,a5);
    

 // digitos em posição correta
    if(b1==a1) {printf("Primeiro digito certo!\n"); a1=-1; b1=-2;}
    else if (b1 == a2 || b1 == a3 || b1 == a4 || b1 == a5)
            printf("Primeiro digito em posicao incorreta.\n");

    if(b2==a2) {printf("Segundo digito certo!\n");  a2=-1; b2=-2;}
    else if (b2 == a1 || b2 == a3 || b2 == a4 || b2 == a5)
            printf("Segundo digito em posicao incorreta.\n");

    if(b3==a3) {printf("Terceiro digito certo!\n"); a3=-1; b3=-2;}
    else if (b3 == a1 || b3 == a2 || b3 == a4 || b3 == a5)
            printf("Terceiro digito em posicao incorreta.\n");

    if(b4==a4) {printf("Quarto digito certo!\n");   a4=-1; b4=-2;}
    else if (b4 == a1 || b4 == a2 || b4 == a3 || b4 == a5)
            printf("Quarto digito em posicao incorreta.\n");

    if(b5==a5) {printf("Quinto digito certo!\n");   a5=-1; b5=-2;}
    else if (b5 == a1 || b5 == a2 || b5 == a3 || b5 == a4)
            printf("Quinto digito em posicao incorreta.\n");
//digitos em posição incorreta
    if(b1==a2) printf("Primeiro digito em posicao incorreta.\n");
    if(b1==a3) printf("Primeiro digito em posicao incorreta.\n");
    if(b1==a4) printf("Primeiro digito em posicao incorreta.\n");
    if(b1==a5) printf("Primeiro digito em posicao incorreta.\n");

    if(b2==a1) printf("Segundo digito em posicao incorreta.\n");
    if(b2==a3) printf("Segundo digito em posicao incorreta.\n");
    if(b2==a4) printf("Segundo digito em posicao incorreta.\n");
    if(b2==a5) printf("Segundo digito em posicao incorreta.\n");

    if(b3==a1) printf("Terceiro digito em posicao incorreta.\n");
    if(b3==a2) printf("Terceiro digito certo!\n");
    if(b3==a4) printf("Terceiro digito em posicao incorreta.\n");
    if(b3==a5) printf("Terceiro digito em posicao incorreta.\n");

    if(b4==a1) printf("Quarto digito em posicao incorreta.\n");
    if(b4==a2) printf("Quarto digito em posicao incorreta.\n");
    if(b4==a3) printf("Quarto digito em posicao incorreta.\n");
    if(b4==a5) printf("Quarto digito em posicao incorreta.\n");

    if(b5==a1) printf("Quinto digito em posicao incorreta.\n");
    if(b5==a2) printf("Quinto digito em posicao incorreta.\n");
    if(b5==a3) printf("Quinto digito em posicao incorreta.\n");
    if(b5==a4) printf("Quinto digito em posicao incorreta.\n");
    
    
}

printf("Voce perdeu! A senha era %d", senha);

return 0;
}