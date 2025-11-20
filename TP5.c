#include "tp5.h"
#include <stdio.h>

long f(int k, long V)
{
    return k * V;
}

long Calcul_Facto()
{
    int n, i;
    long U;

    printf("Donnez le Chiffre pour la factorielle : ");
    scanf("%d", &n);

    i = 0;
    U = 1;

    while (i < n)
    {
        i++;
        U = f(i, U);
    }

    printf("Valeur pour %d = %ld\n", n, U);

    return U;
}
