#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *right;
    struct node *left;
};
struct node *getnode(){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void traverse(struct node **ds)
{
    // struct node *p;
    // p=(*ds);
    while((*ds)!=NULL){
        printf("%d ",(*ds)->info);
        (*ds)=(*ds)->right;
    }
}
void insbeg(struct node **ds,int x){
    struct node *q;
    // p=(*ds);
    q=getnode();
    q->info=x;
    if((*ds)==NULL){
        q->left=NULL;
        q->right=NULL;
    }
    else{
    (*ds)->left=q;
    q->left=NULL;
    q->right=(*ds);
    }
    (*ds)=q;
    
}
void insend(struct node **ds,int x){
    struct node *p,*q;
    q=(*ds);
    if(q==NULL){
        insbeg(&(*ds),x);
    }
    else{
        p=getnode();
        p->info=x;
        while(q->right!=NULL){
            q=q->right;
        }
        q->right=p;
        p->right=NULL;
        p->left=q;
    }
}
void insleft(struct node **ds,int k,int x)
{
    struct node *p,*c,*n;
    n=(*ds);
    if(n==NULL){
        printf("void insertion ");
        exit(1);
    }
    else{
        while(n->info!=k){

            n=n->right;
        }
        p=n->left;
        c=getnode();
        c->info=x;
        c->right=n;
        n->left=c;
        c->left=p;
        p->right=c;

    }
}
void delbeg(struct node **ds){
    struct node *p;
    p=(*ds);
    int x=p->info;
    (*ds)=p->right;
    (*ds)=p;
    free(p);
    // return x;
}
int main(){
    struct node *ds;
    ds=NULL;
    insend(&ds,7);
    insend(&ds,6);
    insend(&ds,4);
    insend(&ds,3);
    insend(&ds,1);
    insleft(&ds,1,2);
    delbeg(&ds);
    traverse(&ds);
    delbeg(&ds);
    traverse(&ds);
    printf("\n");
    
    
    
}
