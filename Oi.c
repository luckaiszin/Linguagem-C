#include <stdio.h>
#include <unistd.h>

int main()
{

    int d;

    printf("Oi Barbara!\n\n");
    sleep(3);
    printf("Nos nunca nos falamos antes.\n\n");
    sleep(3);
    printf("Mas gracas aos algoritmos do Instagram descobri que gostamos de muita coisa em comum.\n\n");
    sleep(3);
    printf("E sinceramente, acho que voce deve ser muito legal!\n\n");
    sleep(3);
    printf("O que voce gostaria de ver primeiro(poema(1)/meme(0))?: ");
    scanf("%d", &d);

    if (d == 1)
    {
        printf("Seu cabelo eh de um anjo que veio do ceu\n\n");
        sleep(3);
        printf("Voce eh o anjo que veio do ceu\n\n");
        sleep(3);
        printf("Seria voce o anjo?\n\n");
        sleep(3);
        printf("Ou tudo que eh belo no ceu?\n\n");
        sleep(3);
        printf("Gostou(sim(1)/nao(0))?: ");
        scanf("%d", &d);

        {
            if (d == 1)
                printf("Obrigado :)  eu me esforco\n\n");
            else
                printf("Ops, nao foi tao bom quanto pensei :(\n\n");
        }
    }
    else
    {
        printf("https://www.instagram.com/p/CeO1FZyrIeK/?utm_source=ig_web_copy_link\n\n");
    }

    sleep(5);

    printf("A semana de provas foi tensa, voce acha que foi bem(1) ou mal(0)?: ");
    scanf("%d", &d);

    if (d == 1)
        printf("Alem de linda, eh sabida\n\n");
    else
        printf("Faz parte, a Poli eh casca-grossa mesmo. O importante eh darmos o nosso melhor.\n\n");
    sleep(3);

    printf("Bom, eu soh queria dizer um oi!\n\n");
    sleep(3);
    printf("Desculpa se isso pareceu um pouco estranho.\n\n");
    sleep(3);
    printf("Eu sou um pouco timido pra fazer isso pessoalmento XD\n\n");
    sleep(3);
    printf("Espero te conhecer melhor um dia, vc parece ser incrivel!\n\n");
    sleep(3);

    return 0;
}