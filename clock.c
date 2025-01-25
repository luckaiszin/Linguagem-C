#include <stdio.h>
#include <unistd.h>
#include <locale.h>
#include <stdlib.h>

int main()
{

    int d;

    printf("Oi Barbara!\n");
    sleep(3);
    printf("Nos nunca nos falamos antes.\n");
    sleep(3);
    printf("Mas gracas aos algoritmos do Instagram descobri que gostamos de muita coisa em comum.\n");
    sleep(3);
    printf("E sinceramente, acho que voce deve ser muito legal!\n");
    sleep(3);
    printf("O que voce gostaria de ver primeiro(meme(0)/poema(1))?: ");
    scanf("%d", &d);

    if (d == 1)
    {
        printf("Seu cabelo eh de um anjo que veio do ceu\n");
        printf("Voce eh o anjo que veio do ceu\n");
        printf("Seria voce o anjo?\n");
        printf("Ou o proprio ceu?\n");
        sleep(3);
        printf("Gostou(sim(1)/nao(0))?: ");
        scanf("%d", &d);

        {if (d == 1)
            printf("Obrigado :)  eu me esforco");
        else
            printf("desculpa :( tentarei fazer melhor");}
    }
    else
    {
        printf("https://www.instagram.com/p/CeO1FZyrIeK/?utm_source=ig_web_copy_link\n");
        
    }

    printf(" A semana de provas foi tensa, voce acha que foi bem(1) ou mal(0)?: ");
    scanf("%d",&d);

    if(d == 1) printf("Alem de linda, eh sabida\n");
    else printf("Faz parte, a Poli eh casca-grossa mesmo. O importante eh darmos o nosso melhor.\n");

    sleep(3);

    printf("Bom, eu soh queria dizer um oi!\n");
    sleep(2);
    printf("Desculpa se isso pareceu um pouco estranho\n");
    sleep(2);
    printf("Eu sou um pouco timido pra fazer isso pessoalmento XD");
    sleep(2);
    printf("Espero te conhecer melhor um dia, vc parece ser incrivel\n");


    return 0;
}