
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    system("chcp 65001");
    system("cls");
    printf("antes da localização\n");
    setlocale(LC_ALL, "Portuguese");
    //setlocale(LC_ALL, "");
    printf("localização atual: %s\n", setlocale(LC_ALL, "Portuguese"));
    printf("depois da localização\n");
    return EXIT_SUCCESS;

}