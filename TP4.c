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

int CalculCarreNombre()
{
    int ValInput,Carre;

    printf("Entrez un nombre\n");
    scanf("%d",&ValInput);

    while (ValInput > 0 && ValInput < 100)
    {
        Carre = ValInput * ValInput;
        printf("Le Resultat est %d\n",Carre);

        printf("Entrez un nombre\n");
        scanf("%d",&ValInput);
    }
    return 0;
}

int CalculCapital()
{
        int CapIni;
        int Compteur = 0;

        float Taux;
        float CapFin;

        printf("Entrez un Capitale Initial\n");
        scanf("%d",&CapIni);
        printf("Entrez un Taux entre 0 et 1\n");
        scanf("%f",&Taux);

        CapFin = CapIni;


        while (CapFin <= 2*CapIni)
        {
            Compteur = Compteur + 1;

            CapFin = CapFin * (1 + Taux);
        }
        printf("Le capital final est %f\n",CapFin);
        printf("Compteur de repetitions a : %d\n",Compteur);

}

int CarreDeDix()
{
    int I,Carre;

    for (I=0; I<10; I++)
    {
        Carre = I*I;
        printf("Le capital final est %d\n",Carre);
    }

}

