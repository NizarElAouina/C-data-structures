#include "header.h"

int main()
{
    int d, c, x;
    cellule *M=NULL,*L=NULL, *Q=NULL, *CL;
    c=1;
    d==1;
    while (c==1)
    {
        printf ("Entrez x pour L \n");
        scanf ("%d",&x);
        L=insert_queue(L,x);
        printf ("Entrez 1 pour refaire ");
        scanf ("%d", &c);
    }
    print(L);
   printf("**********************");
    L=sort_list(L);


    return 0;
}

