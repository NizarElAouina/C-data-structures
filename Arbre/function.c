#include "header.h"

Ar *creer_arbre(Ar *A,int x)
{
    if (A==NULL)
    {
        A=(Ar*)malloc(sizeof(Ar));
        A->val=x;
        A->FG=NULL;
        A->FD=NULL;
    }
    else
    {
        if (x<=A->val)
        {
            A->FG=creer_arbre(A->FG,x);
        }
        else
        {
            A->FD=creer_arbre(A->FD,x);
        }
    }
    return A;
}

void print_pre(Ar *A)
{
        printf("%d",A->val);
        print_pre(A->FG);
        print_pre(A->FD);
}
