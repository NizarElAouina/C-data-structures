#include "header.h"

cellule * insert_tete(cellule *L, int x)
{
    cellule *nouv;
    nouv=NULL;
    nouv=(cellule*)malloc(sizeof(cellule));
    nouv->val=x;
    nouv->suiv=L;
    L=nouv;
    return L;
}

cellule *insert_queue(cellule*L, int x)
{
   cellule *nouv=NULL, *p=NULL;
   nouv=(cellule*)malloc(sizeof(cellule));
   nouv->val=x;
   nouv->suiv=NULL;
   p=L;
   if (L==NULL){
       L=nouv;
   }
   else {
       while(p->suiv!=NULL){
           p=p->suiv;
       }
       p->suiv=nouv;
    return L;
   }
}

cellule *insert_ordre(cellule* L,int x)
{
    cellule *nouv=NULL ,*p=NULL;
    nouv=(cellule*)malloc(1*sizeof(cellule));
    nouv->val=x;
    nouv->suiv=NULL;
    nouv->prec=NULL;
    if(L==NULL)
    {
        L=nouv;
    }
    else
    {
        if(L->val > nouv->val)
        {
            nouv->suiv=L;
            L->prec=nouv;
            L=nouv;
        }
        else
        {
            p=L;
            while(p->suiv!=NULL && p->val < nouv->val)
            {
                p=p->suiv;
            }
            if(p->suiv==NULL)
            {
                p->suiv=nouv;
                nouv->prec=p;
            }
            else
            {
                p->prec->suiv=nouv;
                nouv->prec=p->prec;
                nouv->suiv=p;
                p->prec=nouv;
            }
        }
    }
  return L;
}

cellule *ordre(cellule *L,int x)
{
    cellule *nouv=NULL,*ap=NULL, *av=NULL;
    av=L;
    ap=L;
    nouv=(cellule*)malloc(sizeof(cellule));
    nouv->val=x;
    nouv->suiv=NULL;
    if (L==NULL){

        L=nouv;
    }
    else {
        if (nouv->val<L->val){
            nouv->suiv=L;
            L=nouv;
        }
        else{
        while(ap->val<nouv->val && ap->suiv!=NULL){
                av=ap;
                ap=ap->suiv;
        }
        av->suiv=nouv;
        nouv->suiv=ap;
        }
    }

    return L;
}

cellule *sort_list(cellule *L){
    cellule *Av=NULL, *Ap=NULL;
    Av=L;
    Ap=L;
    int d;
    Av=L;
    Ap=L;
    Ap=Ap->suiv;
    while(Ap!=NULL){
        while(Av=!NULL){
            if ((Av->val)<=(Ap->val)){
                    d=Av->val;
                    Av->val=Ap->val;
                    Ap->val=d;
            }
        }
    }
    print(L);
}

cellule* supprimer(cellule *L,float x)
{
    cellule *av=NULL, *ap=NULL;
    av=L;
    ap=L;
    if (L->val==x)
    {
        L=L->suiv;
        free (ap);
        return ap;
    }
    else {
        while (ap!=NULL){
            if (ap->val!=x){
                av=ap;
                ap=av->suiv;
            }
            else {
                av->suiv=ap->suiv;
                free (ap);
                return L;
            }
        }
    }
}
cellule *delete_last(cellule *L)
{
    cellule *ap=NULL, *av=NULL;
    ap=L;
    av=L;
    while(ap->suiv!=NULL){
        av=ap;
        ap=ap->suiv;
    }
    av->suiv=NULL;
    free(ap);
    return L;
}

cellule *delete_first(cellule *L)
{
    cellule *p=NULL;
    p=L;
    if (L==NULL)
    {
        printf("Liste vide");
    }
    else {
        L=L->suiv;
        free(p);
        return L;
    }
}
cellule *delete(cellule *L,int x)
{
    cellule *P=L, *Q=NULL;
    if (P->val == x)
    {
        P->suiv->prec=NULL;
        L=L->suiv;
        P=P->suiv;
        Q=P;
        free(P);
        P=Q;
    }
    while (P->suiv!=NULL)
    {
        if (P->val  == x)
        {
            P->prec->suiv=P->suiv;
            P->suiv->prec=P->prec;
            Q=P;
            free(P);
            P=Q;
        }
        P =P ->suiv;
    }
    if (P ->val == x)
    {
        P->prec->suiv=NULL;
        Q=P;
        free(P);
        P=Q;
    }

    return(L);

}

void clone(cellule *L,cellule *CL)
{
    cellule *nouv=NULL;
    CL=NULL;
    nouv->val=L->val;
    nouv->suiv=NULL;
    CL=nouv;
    while(L->suiv!=NULL)
    {
        L=L->suiv;
        nouv->val=L->val;
        nouv->suiv=NULL;
        CL->suiv=nouv;
        CL=nouv;
    }
    print (CL);
}

void concat(cellule *L,cellule *M)
{
    cellule *p=NULL ;
    p=L;
    while(p->suiv!=NULL)
    {
        p=p->suiv;
    }
    p->suiv=M;
    print(L);
}

/*void concat(cellule * L, cellule *M)
{
    cellule *p=NULL;
    p=L;
    while(p->suiv!=NULL){
        p=p->suiv;
    }
    p->suiv=M;
    p=M;
    print(L);
}*/

void rotation(cellule *L)
{
   cellule *AV=NULL,*AP=NULL;
   AV=L;
   AP=L;
   while(AP->suiv!=NULL)
   {
       AV=AP;
       AP=AP->suiv;
   }
   AP->suiv=L;
   L=AP;
   AV->suiv=NULL;
   print(L);
}

void print(cellule *L)
{
    cellule *p=NULL;
    p=L;
    while(p!=NULL)
    {
        printf("%d\n",p->val);
        p=p->suiv;
    }
}






