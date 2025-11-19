#include "tp6.h"
#include <stdio.h>

int Equal_Table(void)
{
    int minimal[7];
    int maximal[7];
    int k;
    int Egal;

    printf("=== Insert minimal ===\n");
    for(k = 0; k < 7; k++)
        {
            printf("minimal[%d] : ", k);
            scanf("%d", &minimal[k]);
        }
    printf("\n=== Insert maximal ===\n");
    for(k = 0; k < 7; k++)
        {
            printf("maximal[%d] : ", k);
            scanf("%d", &maximal[k]);
        }
    k = 0;
    Egal = (minimal[k] == maximal[k]);
    while (Egal && k < 6)
        {
            k++;
            Egal = (minimal[k] == maximal[k]);
        }
    if (Egal)
        printf("\nLes deux tableaux sont EGAUX.\n");
    else
        printf("\nLes deux tableaux sont DIFFERENTS.\n");
    return Egal;
}

#include "tp6.h"
#include <stdio.h>

int Minimum_Table(void)
{
    int U[7];
    int k;
    int mini;

    printf("=== Inserer les Temps de la semaine ===\n");
    for (k = 0; k < 7; k++)
    {
        printf("U[%d] : ", k);
        scanf("%d", &U[k]);
    }

    k = 0;
    mini = U[k];

    while (k < 6)
    {
        k++;
        if (U[k] < mini)
            mini = U[k];
    }
    printf("\nMinimum = %d\n", mini);
    return mini;
}


int Maximum_Table(void)
{
    int U[7];
    int k;
    int maxi;

    printf("=== Inserer les Temps de la semaine ===\n");

    for (k = 0; k < 7; k++)
    {
        printf("U[%d] : ", k);
        scanf("%d", &U[k]);
    }

    k = 0;

    maxi = U[k];

    while (k < 6)
    {
        k++;

        if (U[k] > maxi)
        {
            maxi = U[k];
        }
    }

    printf("\nMaximum = %d\n", maxi);
    return maxi;
}

int Amplitude_minimum_V1(void)
{
    int U[7];
    int V[7];
    int k;
    int mini;
    int diff;

    printf("=== Insert U (7 valeurs) ===\n");
    for (k = 0; k < 7; k++)
    {
        printf("U[%d] : ", k);
        scanf("%d", &U[k]);
    }
    printf("\n=== Insert V (7 valeurs) ===\n");
    for (k = 0; k < 7; k++)
    {
        printf("V[%d] : ", k);
        scanf("%d", &V[k]);
    }
    k = 0;
    mini = U[k] - V[k];


    while (k < 6)
    {
        k++;
        diff = U[k] - V[k];
        if (diff < mini)
        {
            mini = diff;
        }
    }
    printf("\nAmplitude minimum V1 = %d\n", mini);
    return mini;
}

void Amplitude_minimum_V2(void)
{
    int U[7];
    int V[7];
    int a[7];
    int k;
    printf("=== Insert U (7 valeurs) ===\n");
    for (k = 0; k < 7; k++)
    {
        printf("U[%d] : ", k);
        scanf("%d", &U[k]);
    }

    printf("\n=== Insert V (7 valeurs) ===\n");
    for (k = 0; k < 7; k++)
    {
        printf("V[%d] : ", k);
        scanf("%d", &V[k]);
    }
    k = 0;
    a[k] = U[k] - V[k];

    while (k < 6)
    {
        k++;
        a[k] = U[k] - V[k];
    }
    printf("\nTableau des amplitudes (V2) :\n");
    for (k = 0; k < 7; k++)
    {
        printf("a[%d] = %d\n", k, a[k]);
    }
}

double Moyenne_Table(void)
{
    int U[7];
    int k;
    int somme;

    printf("=== Inserer les valeur svp ===\n");
    for (k = 0; k < 7; k++)
    {
        printf("U[%d] : ", k);
        scanf("%d", &U[k]);
    }

    k = 0;
    somme = U[k];
    while (k < 6)
    {
        k++;

        somme += U[k];
    }
    double moyenne = (double)somme / 7.0;

    printf("\nMoyenne = %.2f\n", moyenne);

    return moyenne;
}
