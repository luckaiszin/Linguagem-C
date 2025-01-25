#include <stdio.h>

int main()
{

    int semente, senha;
    int quantidade;
    int c;
    int t;

    int a1, a2, a3, a4, a5;

    int b1, b2, b3, b4, b5;

    printf("Bem vinda(o) ao Numle\n");

    printf("Digite a semente para sortear a senha (0 a 10000): ");

    scanf("%d", &semente);

    semente = semente % 134456;

    senha = ((8121 * semente + 28411) % 134456) % 100000;

    a1 = (senha / 10000);
    a2 = ((senha % 10000) / 1000);
    a3 = ((senha % 1000) / 100);
    a4 = ((senha % 100) / 10);
    a5 = (senha % 10);

    printf("Quantidade de tentativas(1 a 10): ");
    scanf("%d", &quantidade);

    for (c = 0; c < quantidade; c++)
    {

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
        // for(i=5;i>0,i--){}

        if (t == senha)
        {
            printf("Voce acertou! A senha eh de fato %d", senha);
            return 0;
        }
        
        printf("%d %d %d %d %d\n", a1, a2, a3, a4, a5);

        
        

        
    }

    printf("Voce perdeu! A senha era %d", senha);

    return 0;
}