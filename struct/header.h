#include <stdio.h>
#include <stdlib.h>
#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
typedef struct cell
{
    int val;
    struct cell *suiv;
    struct cell *prec;
}cellule ;

cellule * insert_tete(cellule *, int );

void print(cellule *);

void rotation (cellule *);

void concat(cellule * , cellule *);

void clone(cellule *,cellule *);

cellule *insert_queue(cellule*, int );

cellule *insert_ordre(cellule *, int );

cellule *ordre(cellule *,int );

cellule *sort_list(cellule *);

cellule *delete_first(cellule *);

cellule * supprimer(cellule *,float );

#endif //HEADER_H_INCLUDED
