#include "header.h"


dbl *insert_head(dbl *L, int x)
{
    dbl *nouv=NULL;
    nouv=(dbl*)malloc(sizeof(dbl));
    nouv->val=x;
    nouv->suiv=NULL;
    nouv->suiv=NULL;
    if(L==NULL)
    {
        L=nouv;
    }
    else
    {
        nouv->suiv=L;
        L->prec=nouv;
        L=nouv;
    }
    return L;
}

dbl *insert_tail(dbl *L, int x)
{
    dbl *nouv=NULL, *p=NULL;
    p=L;
    nouv=(dbl*)malloc(sizeof(dbl));
    nouv->val=x;
    nouv->suiv=NULL;
    nouv->suiv=NULL;
    if(L==NULL)
    {
        L=nouv;
    }
    else
    {
        while(p->suiv!=NULL)
        {
            p=p->suiv;
        }
        p->suiv=nouv;
        nouv->prec=p;
    }
    return L;
}

dbl *insert_order(dbl *L, int x)
{
    dbl *nouv=NULL, *p=NULL;
    p=L;
    nouv=(dbl*)malloc(sizeof(dbl));
    nouv->val=x;
    nouv->suiv=NULL;
    nouv->suiv=NULL;
    if(L==NULL)
    {
        L=nouv;
    }
    else
    {
        if(L->val>=nouv->val)
        {
            nouv->suiv=L;
            L->prec=nouv;
            L=nouv;
        }
        else
        {
            while((p->suiv!=NULL) && (p->val<=nouv->val))
            {
                if (p->suiv==NULL)
                {
                    if(p->val<=nouv->val)
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
                else
                {
                    p->prec->suiv=nouv;
                    nouv->prec=p->prec;
                    nouv->suiv=p;
                    p->prec=nouv;
                }
            }
        }
    }
    return L;
}

dbl *del(dbl *L, int x)
{
    dbl *p=NULL;
    p=L;
    if (L->val==x)
    {
        L=L->suiv;
        L->prec=NULL;
        free(p);
    }
    else
    {
        while(p->suiv!=NULL && p->val!=x)
        {
            p=p->suiv;
        }
        if(p->suiv==NULL)
        {
            if(p->val==x)
            {
                p->prec->suiv=NULL;
                free(p);
            }
        }
        else
        {
            p->prec->suiv=p->suiv;
            p->suiv->prec=p->prec;
            free(p);
        }
    }
    return L;
}

void print(dbl *L)
{
    dbl *p=NULL;
    p=L;
    while(p!=NULL)
    {
        printf("%d \n",p->val);
        p=p->suiv;
    }
}






