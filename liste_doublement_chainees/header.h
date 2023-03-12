#include <stdio.h>
#include <stdlib.h>
#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

typedef struct dbl
{
    int val;
    struct dbl *suiv;
    struct dbl *prec;
}dbl;

dbl *insert_head(dbl *, int );

dbl *insert_tail(dbl *, int );

dbl *insert_order(dbl *, int );

dbl *del(dbl *, int );

void print(dbl *);












#endif //HEADER_H_INCLUDED
