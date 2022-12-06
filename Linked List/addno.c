#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *getnode()
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    return p;
}
void insbeg(struct node **start, int x)
{
    struct node *p;
    p = *start;
    p = getnode();

    p->info = x;
    p->next = (*start);
    *start = p;
}
void insend(struct node **start,int x){
    struct node *p,*q;
    p=*start;
    q=NULL;
    if(p==NULL){
        insbeg(&(*start),x);
    }
    else{
    while(p!=NULL){
        q=p;
        p=p->next;
    }
    p=getnode();
    p->info=x;
    p->next=NULL;
    q->next=p;
    } 
}
void traverse(struct node **start)
{
    struct node *p;
    p = *start;
    while (p != NULL)
    {
        printf("%d ", p->info);
        p = p->next;
    }
}
struct node* reverse(struct node **start)
{
    struct node *p,*n,*c;
    c=*start;
    p=NULL;
    // c->next=p;
    while(c!=NULL){
        
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }   
    return p;
}
struct node* add(struct node **start1,struct node **start2)
{
    struct node *p,*q,*m;
    int t,s,c=0;
    // p=*start1;
    // q=*start2;
    m=NULL;
    p=reverse(&(*start1));
    q=reverse(&(*start2));
    while(p!=NULL && q!=NULL)
    {
        t=(p->info)+(q->info)+c;
        s=t%10;
        c=t/10;
        insbeg(&m,s);
        p=p->next;
        q=q->next;
        
    }
    while(p!=NULL)
    {
        t=(p->info)+c;
        s=t%10;
        c=t/10;
        p=p->next;
        insbeg(&m,s);
    }
    while(q!=NULL)
    {
        t=(q->info)+c;
        s=t%10;
        c=t/10;
        q=q->next;
        insbeg(&m,s);
    }
    if(c>0){
        insbeg(&m,c);
    }
    return m;
}

int main()
{
    struct node *start1,*start2,*start3;
    start1 = NULL;
    start2 = NULL;
    start3 = NULL;
    insend(&start1, 1);
    insend(&start1, 2);
    insend(&start1, 3);
    insend(&start1, 4);
    // insbeg(&start1, 32);
    traverse(&start1);
    printf("\n");
    insend(&start2, 1);
    insend(&start2, 2);
    insend(&start2, 3);
    // insend(&start2, 40);
    // insbeg(&start1, 32);
    traverse(&start2);
    printf("\n");
    start3=add(&start1,&start2);
    traverse(&start3);
}