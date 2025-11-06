#include "tp_pi.h"
#include <stdio.h>
#include <math.h>

float CalculPi(void)
{
    int N, n;
    float ValPi, Somme, CalculInter;

    ValPi = 0;
    Somme = 0;
    CalculInter = 0;

    printf("Entrez un Nombre Entier N:\n");
    scanf("%d",&N);

    for (n=1;n<=N;n++)
    {
        CalculInter = 1.0f / (n * n);
        Somme = Somme + CalculInter;
    }
    ValPi = sqrt(6*Somme);
    printf("Valeur approximative de PI = %.10f pour N = %d\n", ValPi, N);
    return ValPi;

}
