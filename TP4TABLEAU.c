#include "tp4tableau.h"
#include <stdio.h>
/*
#include <stdlib.h>
#include <time.h>*/

int Tableau_1_V1(void)
{
    int T[50];
    int N, i;

    printf("Donner la dimension du tableau (max 50) : ");
    scanf("%d", &N);

    if (N > 50 || N <= 0)
    {
        printf("Erreur : dimension invalide.\n");
        return 1;
    }

    for (i = 0; i < N; i++)
    {
        printf("Entrer la valeur %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("\nLes valeurs du tableau sont :\n");

    for (i = 0; i < N; i++)
    {
        printf("%d ", T[i]);
    }

    printf("\n");

    return 0;
}



void RNG_1(int N, int T[])
{
    int i;

    for (i = 0; i < N; i++)
    {
        T[i] = rand() % 100;
    }
}


void Tableau_1_V2(void)
{
    int T[50];
    int N, i;

    printf("Donner la dimension du tableau (max 50) : ");
    scanf("%d", &N);

    if (N <= 0 || N > 50)
    {
        printf("Erreur : dimension invalide.\n");
        return;
    }

    RNG_1(N, T);

    printf("\nTableau T :\n");
    printf("Index | Valeur\n");
    printf("--------------\n");

    for (i = 0; i < N; i++)
    {
        printf("%5d | %d\n", i, T[i]);
    }
}
