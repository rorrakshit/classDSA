#include<stdio.h>
#include<stdlib.h>
struct node{
    int coef;
    int pow;
    struct node *next;
};
struct node *getnode(){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void insbeg(struct node **start,int x,int y){
    struct node *p; 
    p=*start;
    p=getnode();
   
    p->coef=x;
    p->pow=y;
    p->next=(*start);
    *start=p;
}
void insend(struct node **start,int x,int y){
    struct node *p,*q;
    p=*start;
    q=NULL;
    if(p==NULL){
        insbeg(&(*start),x,y);
    }
    else{
    while(p!=NULL){
        q=p;
        p=p->next;
    }
    p=getnode();
    p->coef=x;
    p->pow=y;
    p->next=NULL;
    q->next=p;
    } 
}
void traverse(struct node **start){
    struct node *p;
    p=*start;
    while(p!=NULL ){
        printf("c=%d p=%d  ",p->coef,p->pow);
        p=p->next;
    }
}
struct node* add(struct node** start1,struct node **start2)
{
    struct node *p,*q,*t;
    p=*start1;
    q=*start2;
    t=NULL;
    while(p!=NULL && q!=NULL)
    {
        if(p->pow == q-> pow)
        {
            insend(&(t),p->coef+q->coef,p->pow);
            p=p->next;
            q=q->next;
        }
        else
        {
            if(p->pow > q->pow)
            {
                insend(&(t),p->coef,p->pow);
                p=p->next;
            }
            else
            {
                insend(&(t),q->coef,q->pow);
                q=q->next;
            }
        }
    }
    while(p!=NULL)
    {
        insend(&(t),p->coef,p->pow);
        p=p->next;
    }
    while(q!=NULL)
    {
        insend(&(t),q->coef,q->pow);
        q=q->next;
    }
    // traverse(&t);
    return t;
}
int main(){
    struct node *start1,*start2,*start3;
    start1=NULL;
    start2=NULL;
    start3=NULL;
    insend(&start1,7,4);
    insend(&start1,4,3);
    insend(&start1,2,2);                                               
    insend(&start1,5,1);
    traverse(&start1);
    printf("\n");
    insend(&start1,7,4);
    insend(&start2,4,3);
    insend(&start2,2,2);                                               
    insend(&start2,5,1);
    traverse(&start2);
    printf("\n");
    start3=add(&start1,&start2);
    traverse(&start3);
}