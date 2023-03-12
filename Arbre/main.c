#include "header.h"

int main()
{
    Ar *A=NULL;
    int c=1,x;
    while(c==1)
    {
        printf("Entrez la valeur x .\n");
        scanf("%d",&x);
        A=creer_arbre(A,x);
        printf("Entre 1 :\t");
        scanf("%d",&c);
    }

    print_pre(A);
}
