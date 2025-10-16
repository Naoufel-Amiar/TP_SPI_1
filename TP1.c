int Somme_Prog_Prof()
{
    int N,i,Somme;

    Somme = 0;
    for (i=0;i<=3;i++)
    {
        printf("Entrez un Nombre :\n");
        scanf("%d",&N);
        Somme = Somme + N;
    }
    printf("La somme final est %d", Somme);
    return 0;
}

int Somme_Prog_TantQue_Faire()
{
    int N,i,Somme;

    Somme = 0;
    i = 0;

    while(i <= 3)
    {
        printf("Entrez un Nombre :\n");
        scanf("%d",&N);
        Somme = Somme + N;
        i = i+1;
    }
    printf("La somme final est %d", Somme);
    return 0;
}

int Somme_Prog_Faire_TantQue()
{
    int N,i,Somme;

    Somme = 0;
    i = 0;

    do
    {
        printf("Entrez un Nombre :\n");
        scanf("%d",&N);
        Somme = Somme + N;
        i = i+1;
    }while(i <= 3);

    printf("La somme final est %d", Somme);
    return 0;
}

int Somme_Prog_Faire_Pour()
{
    int N,i,Somme;

    Somme = 0;
    i = 0;

    do
    {
        printf("Entrez un Nombre :\n");
        scanf("%d",&N);
        Somme = Somme + N;
        i = i+1;
    }while(i<=3);

    printf("La somme final est %d", Somme);
    return 0;
}
