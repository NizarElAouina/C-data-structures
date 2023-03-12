#include <stdio.h>
#include <stdlib.h>
#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

typedef struct Arbre
{
    int val;
    struct Arbre *FG;
    struct Arbre *FD;
}Ar;

Ar *creer_arbre(Ar *,int );

void print_pre(Ar *);






















#endif //HEADER_H_INCLUDED
