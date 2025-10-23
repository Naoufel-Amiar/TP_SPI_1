#include <stdio.h>
#include <stdlib.h>

int Etoile_Forme()
{
 int d, i, j;
    printf("Combien de lignes ? ");
    if (scanf("%d", &d) != 1 || d < 1) return 1;

    for (i = 1; i <= d; i++)
    {        // ligne i
        for (j = 1; j <= i; j++)
        {    // i étoiles
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
