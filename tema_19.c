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

int main()
{
    Nod* radacina=initializare(5);
    
    return 0;
}