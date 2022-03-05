#include<stdio.h>
#include"variabledebz.h"
void multi(void)
{
    int nombre;
    int nombre2;
    int resultat = 0;
    system("clear");
    printf("Vous avez choisis le mode Multiplication");
    printf("\nVeuillez choisir deux nombre");
    printf("\nPremier nombre :");
    scanf("%d", &nombre);
    printf("\nSeconde Nombre :");
    scanf("%d", &nombre2);
    resultat = nombre * nombre2;
    printf("Voici le résultat de votre multiplication : %d", resultat);
}

void division(void)
{
    int nombre;
    int nombre2;
    int resultat = 0;
    system("clear");
    printf("Vous avez choisis le mode Division");
    printf("\nVeuillez choisir deux nombre");
    printf("\nPremier nombre :");
    scanf("%d", &nombre);
    printf("\nSeconde Nombre :");
    scanf("%d", &nombre2);
    resultat = nombre / nombre2;
    printf("Voici le résultat de votre division %d", resultat);    
}

void addi(void)
{
    int nombre;
    int nombre2;
    int resultat = 0;
    system("clear");
    printf("Vous avez choisis le mode Addition");
    printf("\nVeuillez choisir deux nombre");
    printf("\nPremier nombre :");
    scanf("%d", &nombre);
    printf("\nSeconde Nombre :");
    scanf("%d", &nombre2);
    resultat = nombre + nombre2;
    printf("Voici le résultat de votre addition %d", resultat);
    
}

void soust(void)
{
    int nombre; 
    int nombre2;
    int resultat = 0;
    system("clear");
    printf("Vous avez choisis le mode Soustraction");
    printf("\nVeuillez choisir deux nombre");
    printf("\nPremier nombre :");
    scanf("%d", &nombre);
    printf("\nSeconde Nombre :");
    scanf("%d", &nombre2);
    resultat = nombre - nombre2;
    printf("Voici le resultat de votre soustraction %d", resultat);
}

