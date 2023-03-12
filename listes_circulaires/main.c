#include <stdio.h>
#include <stdlib.h>

typedef struct Cell{
    int data;
    struct Cell * next;
}Node;

Node* insert_LALAnihal(Node* T, int x){
    Node* nouv = (Node*)malloc(sizeof(Node));
    nouv->data = x;
    nouv->next = nouv;
    if (T==NULL)return nouv;
    if(T->data > x){
        Node* p = T;
        while(p->next!=T)p=p->next;
        p->next = nouv;
        nouv->next= T;
        T = nouv;
    }
    else{
    Node* AV = T;
    Node* AP = T->next;
    while(AP!=T && AP->data < x){
        AV = AP;AP=AP->next;
    }
    AV->next = nouv;
    nouv->next = AP;
    }
    return T;
}
Node * del_element(Node *L, int x)
{
    Node *Ap=NULL, *Av=NULL;
    Ap=L;
    Av=L;
    if (L==NULL){
        printf("Liste vide");
    }
    else {
        if (L->data==x){
            while (Ap->next!=L){
                Ap=Ap->next;
            }
            L=L->next;
            Ap->next=L;
            free(Av);
        }
        else
        {
            while(Ap!=L && Ap->data!=x )
            {
                Av=Ap;
                Ap=Ap->next;
            }
                Av->next=Ap->next;
                free(Ap);
        }
    }
    return L;


}

Node* insert_ordre(Node* T, int x){
    Node* nouv = (Node*)malloc(sizeof(Node));
    nouv->data = x;
    nouv->next = nouv;
    if (T==NULL)return nouv;
    Node* AV = T;
    Node* AP = T->next;
    if (AP == AV){
        if (AV->data < x){nouv->next= AV; AV->next = nouv;return AV;}
        else{nouv->next= AV; AV->next = nouv;return nouv;}
    }
    if (AV->data > x){

    }
    while(AP!=T && (AV->data > nouv->data || AP->data < nouv->data)){
        AV = AP;AP=AP->next;
    }
    AV->next = nouv;nouv->next = AP;
    if(AP == T){
            if(T->data < x){return T;}
            return nouv;
    }
    return T;
}
void print(Node* T){
        Node* p = T;
        do{
            printf("%d " ,p->data);
            p=p->next;
        }while(p!=T);
    }


int main()
{   Node* T = NULL;
    T = insert_LALAnihal(T, 3);
    T = insert_LALAnihal(T, 4);
    T = insert_LALAnihal(T, 14);
    T = insert_LALAnihal(T, 0);

    print(T);
    T=del_element(T,3);
    printf("\n");
    print(T);
    return 0;
}
