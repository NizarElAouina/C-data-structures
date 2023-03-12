#include <stdio.h>
#include <stdlib.h>
#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

typedef struct Livre
{
    char titre[100];
    int nbre;
}Livre;

typedef struct Cellule
{
    Livre nom;
    struct Cellule *suiv;
}Cellule;

void afficherLivreT(Cellule *);

Cellule *ajouterLivre(Cellule *, Livre );


#endif
