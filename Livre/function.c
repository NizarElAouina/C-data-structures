#include "header.h"

Cellule *ajouterLivre(Cellule *L, Livre x)
{
    Cellule *nouv=NULL, *p=NULL;
    p=L;
    nouv=(Cellule*)malloc(sizeof(Cellule));
    nouv->nom=x;
    nouv->suiv=NULL;
    if (L==NULL){
        L=nouv;
    }
    else{
        if (nouv->nom.nbre<=1)
        {
            nouv->suiv=L;
            L=nouv;
        }
        else{
            p=L;
            while(p->suiv!=NULL)
            {
                p=p->suiv;
            }
            p->suiv=nouv;
        }
    }
    return L;
}

void afficherLivreT(Cellule *L)
{
    Cellule *p=NULL;
    p=L;
    while(p!=NULL)
    {
        printf("%s",p->nom.titre);
        p=p->suiv;
    }
}
