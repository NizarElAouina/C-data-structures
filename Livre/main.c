#include "header.h"

int main()
{
    Cellule *L;
    Livre x;
    int c;
    c=1;
    while(c==1){
    printf("Entrez le titre du livre.\n");
    fflush(stdin);
    scanf("%s",&x.titre);
    printf("Entrez sa quantite.\n");
    scanf("%d",&x.nbre);
    L=ajouterLivre(L,x);
    printf("Entre 1 pour recommencer. \n ");
    scanf("%d",&c);
    }

    printf("************************************");
    afficherLivreT(L);
}
