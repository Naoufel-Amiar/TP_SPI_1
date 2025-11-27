#include "tp4tableau.h"
#include <stdio.h>

#include <stdlib.h>
#include <time.h>

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

#include <stdio.h>

#define MAX_L 50
#define MAX_C 50

int Exo2_1(void) {
    int T[MAX_L][MAX_C];
    int L, C;
    int i, j;

    printf("Donner le nombre de lignes (max 50) : ");
    scanf("%d", &L);
    printf("Donner le nombre de colonnes (max 50) : ");
    scanf("%d", &C);

    if (L <= 0 || L > MAX_L || C <= 0 || C > MAX_C) {
        printf("Erreur : dimensions invalides.\n");
        return 1;
    }

    // Saisie des valeurs
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("Entrer T[%d][%d] : ", i, j);
            scanf("%d", &T[i][j]);
        }
    }

    // Affichage du tableau
    printf("\nContenu du tableau T :\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("%d\t", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}


int Exo2_2(void) {
    int T[MAX_L][MAX_C];
    int L, C;
    int i, j;
    int somme;  // variable d'aide unique pour les sommes

    printf("Donner le nombre de lignes (max 50) : ");
    scanf("%d", &L);
    printf("Donner le nombre de colonnes (max 50) : ");
    scanf("%d", &C);

    if (L <= 0 || L > MAX_L || C <= 0 || C > MAX_C) {
        printf("Erreur : dimensions invalides.\n");
        return 1;
    }

    // Saisie du tableau
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("Entrer T[%d][%d] : ", i, j);
            scanf("%d", &T[i][j]);
        }
    }

    // Somme des lignes
    printf("\nSomme de chaque ligne :\n");
    for (i = 0; i < L; i++) {
        somme = 0;
        for (j = 0; j < C; j++) {
            somme += T[i][j];
        }
        printf("Ligne %d : %d\n", i, somme);
    }

    // Somme des colonnes
    printf("\nSomme de chaque colonne :\n");
    for (j = 0; j < C; j++) {
        somme = 0;
        for (i = 0; i < L; i++) {
            somme += T[i][j];
        }
        printf("Colonne %d : %d\n", j, somme);
    }

    return 0;
}

int Exo3_ProduitScalaire(void) {
    int U[50], V[50];
    int N;
    int i;
    int produit = 0;

    printf("Donner la dimension du vecteur (max 50) : ");
    scanf("%d", &N);

    if (N <= 0 || N > 50) {
        printf("Erreur : dimension invalide.\n");
        return 1;
    }

    // Saisie du vecteur U
    printf("\nSaisie du vecteur U :\n");
    for (i = 0; i < N; i++) {
        printf("U[%d] = ", i);
        scanf("%d", &U[i]);
    }

    // Saisie du vecteur V
    printf("\nSaisie du vecteur V :\n");
    for (i = 0; i < N; i++) {
        printf("V[%d] = ", i);
        scanf("%d", &V[i]);
    }

    // Calcul du produit scalaire
    for (i = 0; i < N; i++) {
        produit += U[i] * V[i];
    }

    printf("\nLe produit scalaire est : %d\n", produit);

    return 0;
}
