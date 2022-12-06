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
void insaft(struct node **start,int k,int x,int y){
    struct node *p,*q;
    p=*start;
    // q=NULL;
    while(p!=NULL && k!=p->pow){
        p=p->next;
    }
    q=getnode();
    q->next=p->next;
    q->coef=x;
    q->pow=y;
    
    p->next=q;
}
void insord(struct node **start,int x,int y){
    struct node *p,*q;
    p=(*start);
    q=NULL;
    while(p!=NULL && y>=(p->pow)){
        q=p;
        p=p->next;
    }
    // q=getnode();
    if(q==NULL){
        insbeg(&(*start),x,y);
    }
    else{
        insaft(&(*start),q->pow,x,y);
    }
}
void delaft(struct node **term)
{
 //int x;
 struct node *q,*p;
 p=(*term);
 q=(p)->next;
 (p)->next=q->next;
 //x=q->info;
 free(q);
 //return x;
}

void traverse(struct node **start){
    struct node *p;
    p=*start;
    while(p!=NULL ){
        printf("%dx%d  ",p->coef,p->pow);
        p=p->next;
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

struct node* mul(struct node **start1,struct node **start2){
    struct node *p,*q,*t,*m;
    // p=*start1;
    p=*start1;
    t=NULL;
    m=NULL;
    while(p->next!=NULL)
    {
        q=*start2;
        while(q!=NULL){
            insord(&(t),p->coef*q->coef,p->pow+q->pow);
            q=q->next;
        }
        p=p->next;
    }
    t=reverse(&t);
    m=t;
    while(m->next!=NULL)
    {
        if(m->pow == (m->next)->pow){
            m->coef=(m->coef)+((m->next)->coef);
            delaft(&m);
            // t->next=t->next->next;
            
        }
        else
        {
            // insend(&m,(t->coef),(t->pow));
            m=m->next;
        }
    }
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
    start3=mul(&start1,&start2);
    traverse(&start3);
}