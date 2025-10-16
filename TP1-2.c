int Somme_1_2_Prog_Prof()
{
    int N,i,Somme;

    Somme = 0;
    for (i=0;i<4;i++)
    {
        printf("Entrez un Nombre Entier :\n");
        scanf("%d",&N);
        Somme = Somme + N;
    }
    printf("La somme final est %d", Somme);
    return 0;
}

int Somme_1_2_While()
{
    int N,i,Somme;

    Somme = 0;
    i = 0;
    while(i<4)

    {
        printf("Entrez un Nombre Entier :\n");
        scanf("%d",&N);
        Somme = Somme + N;
        i = i+1;
    }
    printf("La somme final est %d", Somme);
    return 0;
}

int Somme_1_2_DoWhile()
{
    int N,i,Somme;

    Somme = 0;
    i = 0;

    do
    {
        printf("Entrez un Nombre Entier :\n");
        scanf("%d",&N);
        Somme = Somme + N;
        i = i+1;
    }while(i<4);
    printf("La somme final est %d", Somme);
    return 0;
}
