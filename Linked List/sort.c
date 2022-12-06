#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;
};
struct node *getnode(){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void insbeg(struct node **start,int x){
    struct node *p; 
    p=*start;
    p=getnode();
   
    p->info=x;
    p->next=(*start);
    *start=p;
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
void insaft(struct node **start,int k,int x){
    struct node *p,*q;
    p=*start;
    // q=NULL;
    while(p!=NULL && k!=p->info){
        p=p->next;
    }
    q=getnode();
    q->next=p->next;
    q->info=x;
    
    p->next=q;
}
void insord(struct node **start,int x){
    struct node *p,*q;
    p=(*start);
    q=NULL;
    while(p!=NULL && x>(p->info)){
        q=p;
        p=p->next;
    }

    // q=getnode();
    if(q==NULL){
        insbeg(&(*start),x);
    }
    else{
        insaft(&(*start),q->info,x);
    }
}
void traverse(struct node **start){
    struct node *p;
    p=*start;
    while(p!=NULL ){
        printf("%d ",p->info);
        p=p->next;
    }
}
int main(){
    struct node *start;
    start=NULL;
      insort(&start,37);
    insord(&start,34);
    insord(&start,32);                                               
    insord(&start,35);
    insord(&start,35);
    insord(&start,31);
    traverse(&start);
}