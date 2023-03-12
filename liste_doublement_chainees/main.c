#include "header.h"

int main()
{
    dbl *L=NULL;
    int c,x;
    c=1;
    while(c==1)
    {
        printf("Entre la valeur de x dans L :\n");
        scanf("%d",&x);
        L=insert_tail(L,x);
        printf("Entrez 1 pour réitérer: \t");
        scanf("%d",&c);
    }

    print(L);
    printf("*******************************\n");
    L=del(L,9);
    print(L);
    return 0;
}
