#include <stdio.h>

int main()
{

    int semente, senha;
    int quantidade;
    int c;
    int t;
    int i;

    int a1, a2, a3, a4, a5;

    int b1, b2, b3, b4, b5;

    printf("Bem vinda(o) ao Numle\n");

    printf("Digite a semente para sortear a senha (0 a 10000): ");

    scanf("%d", &semente);

    semente = semente % 134456;

    senha = ((8121 * semente + 28411) % 134456) % 100000;

    printf("Quantidade de tentativas(1 a 10): ");
    scanf("%d", &quantidade);

    for (c = 0; c < quantidade; c++)
    {
        int d0=0;
        int d1=0;
        int d2=0;
        int d3=0;
        int d4=0;
        int d5=0;
        int d6=0;
        int d7=0;
        int d8=0;
        int d9=0;

        a1 = (senha / 10000);
        a2 = ((senha % 10000) / 1000);
        a3 = ((senha % 1000) / 100);
        a4 = ((senha % 100) / 10);
        a5 = (senha % 10);


        printf("Digite a tentativa (0 a 99999): ");
        scanf("%d", &t);
        b1 = t / 10000;
        b2 = (t % 10000) / 1000;
        b3 = (t % 1000) / 100;
        b4 = (t % 100) / 10;
        b5 = t % 10;

        if (t == senha)
        {
            printf("Voce acertou! A senha eh de fato %d", senha);
            return 0;
        }

        if(b1==a1) {printf("Primeiro digito certo!\n"); a1=-1;}
        if(b2==a2) {printf("Segundo digito certo!\n");  a2=-2;}
        if(b3==a3) {printf("Terceiro digito certo!\n"); a3=-3;}
        if(b4==a4) {printf("Quarto digito certo!\n");   a4=-4;}
        if(b5==a5) {printf("Quinto digito certo!\n");   a5=-5;}
        

        

    }





    printf("Voce perdeu! A senha era %d", senha);

 return 0;
}