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


