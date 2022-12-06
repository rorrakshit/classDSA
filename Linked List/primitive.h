#include<stdio.h>
#include<stdlib.h>
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
void insbeg(struct node **list,int x)
{
    struct node *p;
    p = getnode();
    p->info = x;
    p->next = *list;
    *list = p;
}
void insaft( struct node **list,int k,int x){
struct node *p, *q;
q=*list;
while(q!=NULL && k!=q->info){
     q=q->next;
           
}
p=getnode();
p->info=x;
p->next=q->next;
q->next=p;

}
void insend( struct node  **list,int x)
{
    struct node *q, *p;
    q = *list;
    if(*list==NULL){
        insbeg(&(*list), x);
    }
    else{
    while (q->next != NULL)
    {
        q = q->next;
    }
    p = getnode();
    p->info = x;
    p->next = NULL;
    q->next = p;
}
}
void insord(struct node **start,int x){
struct node *p ,*q;
p=*start;
q=NULL;
while(p!=NULL && x>p->info){
    q=p;
    p=p->next;
}
if(q==NULL)
insbeg(&(*start),x);
else
insaft(&(*start),(q->info),x);

}

void traverse( struct node **list)
{
    struct node *p;
    p = *list;
    int count;
    while (p != NULL)
    {
        printf("%d\n", p->info);
        p = p->next;
    }
   
}