#include<stdio.h>
#include"variabledebz.h"

int main(void)
{
    int choix;
    system("cat salut.txt");
    printf("\nCalculatrice du futur\n[§]Veuillez choisir un mode :");
    scanf("%d", &choix);

    if(choix == 1)
    {
        multi();
    }else if (choix == 2)
    {
        division();
    }else if (choix == 3)
    {
        addi();
    }else if (choix == 4)
    {
        soust();
    }else
    {
        printf("Vous devez choisir un mode entre 1 2 3 et 4");
    }

    return 0;
}