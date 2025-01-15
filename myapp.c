/*Traversarea arborilor binari ordonați – Se dă un arbore binar ordonat care se populează cu elemente 
aleatorii. Să se afișeze elementele în urmă traversării arborelui în „pre-ordine”, „in-ordine”, 
„post-ordine” și pe „nivel” (level-order traversal).
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct Nod{
    int cheie;
    struct Nod*st;
    struct Nod*dr;
}Nod;

Nod* initializare(int cheie)
{
    Nod*nod=(Nod*)malloc(sizeof(Nod));
    nod->cheie=cheie;
    nod->st=NULL;
    nod->dr=NULL;

    return nod;
}

Nod* inserare(Nod* crt_nod, int cheie)
{
    if(crt_nod==NULL)
        return initializare(cheie);
    
    if(cheie<crt_nod->cheie)
        crt_nod->st=inserare(crt_nod->st,cheie);
    else 
        crt_nod->dr=inserare(crt_nod->dr,cheie);
    
    return crt_nod;
}

void preordine(Nod* crt_nod)
{
    if(crt_nod==NULL)
        return;

    printf("%d ",crt_nod->cheie);
    preordine(crt_nod->st);
    preordine(crt_nod->dr);
}

void inordine(Nod* crt_nod)
{
    if(crt_nod==NULL)
        return;

    inordine(crt_nod->st);
    printf("%d ",crt_nod->cheie);
    inordine(crt_nod->dr);
}

void postordine(Nod* crt_nod)
{
    if(crt_nod==NULL)
        return;

    postordine(crt_nod->st);
    postordine(crt_nod->dr);
    printf("%d ",crt_nod->cheie);
}

void nivelulCurent(Nod* nod, int nivel)
{
    if(nod==NULL)
        return;
    
    if(nivel==1)
        printf("%d ",nod->cheie);
    else if(nivel>1)
    {
        nivelulCurent(nod->st,nivel-1);
        nivelulCurent(nod->dr,nivel-1);
    }
}

int inaltime(Nod* nod)
{
    if(nod==NULL)
        return 0;
    else
    {
        int inaltime_st = inaltime(nod->st);
        int inaltime_dr = inaltime(nod->dr);
        if(inaltime_st>inaltime_dr)
            return (inaltime_st+1);
        else
            return (inaltime_dr+1);
    }
}

void nivel(Nod*nod)
{
    int h=inaltime(nod);
    
    for(int i=1;i<=h;i++)
    nivelulCurent(nod,i);
}

int main()
{
    srand(time(NULL));

    Nod* radacina=initializare(rand() % 100 + 1); 
    
    for(int i = 0; i < 6; i++)
    {
        inserare(radacina, rand() % 100 + 1);  
    }

    printf("Traversare in pre-ordine: ");
    preordine(radacina);
    printf("\n");

    printf("Traversare in in-ordine: ");
    inordine(radacina);
    printf("\n");

    printf("Traversare in post-ordine: ");
    postordine(radacina);
    printf("\n");

    printf("Traversare pe nivel: ");
    nivel(radacina);
    
    return 0;
}