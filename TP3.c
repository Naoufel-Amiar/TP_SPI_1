#include "tp3.h"
#include "stdio.h"

double PI(void)
{
	return 3.14159265;
}

double SURFACE(double RAYON)
{
	return PI()*RAYON*RAYON;
}

double CalculSurface(void)
{
double R;
printf("Introduire le rayon du cercle:");
scanf("%lf", &R);
printf("La surface  du cercle est %f.\n",SURFACE(R));
return 0;
}


double MIN(double a, double b)
{
    return (a < b) ? a : b;
}

double MAX(double a, double b)
{
    return (a > b) ? a : b;
}


int MinMaxNumberListInsert(void)
{
    double t[4];
    double minGlobal, maxGlobal;
    int i;

    // Lecture des 4 valeurs
    for (i = 0; i < 4; i++)
    {
        printf("Entrer un nombre : ");
        scanf("%lf", &t[i]);
    }

    // Initialisation
    minGlobal = t[0];
    maxGlobal = t[0];

    // Recherche du min et max
    for (i = 1; i < 4; i++)
    {
        minGlobal = MIN(minGlobal, t[i]);
        maxGlobal = MAX(maxGlobal, t[i]);
    }

    printf("Le minimum des quatre nombres est : %f\n", minGlobal);
    printf("Le maximum des quatre nombres est : %f\n", maxGlobal);

    return 0;
}



