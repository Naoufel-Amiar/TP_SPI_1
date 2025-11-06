#include <stdio.h>
#include <stdlib.h>

int Etoile_Forme()
{
 int d, i, j;
    printf("Combien de lignes ? ");
    if (scanf("%d", &d) != 1 || d < 1) return 1;

    for (i = 1; i <= d; i++)
    {
        for (j = 1; j <= i; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}


int Suite()
{
    int U, compteur = 0;
    printf("Entrez la valeur initiale U0 : ");
    scanf("%d", &U);
    if (U <= 0) {
        printf("Erreur : veuillez entrer un entier positif.\n");
        return 1;
    }
    printf("Suite de Syracuse : %d ", U);
    while (U != 1) {
        if (U % 2 == 0)
            U = U / 2;
        else
            U = 3 * U + 1;
        compteur++;
        printf(" %d ", U);
    }
    printf("\nLa suite a atteint 1 apres %d etapes.\n", compteur);
    return 0;
}


int NB_Premier()
{
    int n, i;
    int premier = 1;
    printf("Entrez un nombre : ");
    scanf("%d", &n);
    if (n <= 1) {
        premier = 0;
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                premier = 0;
                break;
            }
        }
    }
    if (premier == 1)
        printf("%d est un nombre premier.\n", n);
    else
        printf("%d n'est pas un nombre premier.\n", n);
    return 0;
}
