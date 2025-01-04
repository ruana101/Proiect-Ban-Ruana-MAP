/*Traversarea arborilor binari ordonați – Se dă un arbore binar ordonat care se populează cu elemente 
aleatorii. Să se afișeze elementele în urmă traversării arborelui în „pre-ordine”, „in-ordine”, 
„post-ordine” și pe „nivel” (level-order traversal).
*/
#include<stdio.h>
#include<stdlib.h>

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
    
    if(cheie>=crt_nod->cheie)
        crt_nod->dr=inserare(crt_nod->dr,cheie);
    else 
        crt_nod->st=inserare(crt_nod->st,cheie);
    
    return crt_nod;
}

void preordine(Nod* crt_nod)
{
    if(crt_nod==NULL)
        return;

    printf("%d",crt_nod->cheie);
    preordine(crt_nod->st);
    preordine(crt_nod->dr);
}


int main()
{
    Nod* radacina=initializare(5);
    inserare(radacina,3);
    inserare(radacina,8);
    inserare(radacina,2);
    inserare(radacina,4);
    inserare(radacina,1);
    inserare(radacina,7);
    inserare(radacina,9);
    inserare(radacina,6);

    printf("Traversare in pre-ordine: ");
    preordine(radacina);
    printf("\n");
    
    return 0;
}