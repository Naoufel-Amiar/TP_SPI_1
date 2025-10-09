#include <stdio.h>
int TARIF_AFFRANCHISSELENTS()
{
    //TARIF_AFFRANCHISSELENTS

    float poids,tarif;

    printf("Entrez un poids svp\n");
    scanf("%f",&poids);

    if (poids<20)
    {
        tarif = 2.20;
    }
    else if(poids<50)
    {
        tarif = 4.40;
    }
    else
    {
         tarif = 6.70;
    }

    printf("Le tarif est de %.2f €\n",tarif);


    return 0;
}
