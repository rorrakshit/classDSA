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
    p=getnode();
    // p=(*start)
    p->info=x;
    p->next=(*start);
    *start=p;
}
void insend(struct node **start,int x){
    struct node *p,*q;
    //p=getnode();
    p=*start;
    if(p== NULL){
        insbeg(&(*start),x);
    }
    else{
    while(p->next!=NULL){
        p=p->next;
    }
    q=getnode();
    p->next=q;
    q->info=x;
    q->next=NULL;
    }  
}
void insaft(struct node **start,int k,int x){
    struct node *p,*q;
    p=*start;
    while(p!=NULL && k != p->info){
        p=p->next;
    }
    q=getnode();
    q->next=p->next;
    q->info=x;
    p->next=q; 
}

void insort(struct node **start,int x){
    struct node *p,*q;
    p=*start;
    q=NULL;
    while(p!=NULL && x>p->info){
        q=p;
        p=p->next;
    }
    if(q==NULL){
        insbeg(&(*start),x);
    }
    else{
        insaft(&(*start),q->info,x);
    }
    
}
void traverse(struct node **start){
    struct node *p;
    p=(*start);
    while(p!=NULL){
        printf("%d ",p->info);
        p=p->next;
    }
    
}
int main(){
    struct node *start;
    start=NULL;
    // insbeg(&(start),34);
    // insbeg(&(start),37);
    // insbeg(&(start),32);
    // insbeg(&(start),33);
    // insaft(&(start),37,38);
    // insaft(&(start),32,31);
    // traverse(&(start));
    // printf("\n");
    insort(&(start),34);
    insort(&(start),37);
    insort(&(start),32);
    insort(&(start),87);
    insort(&(start),67);
    traverse(&(start));
    printf("\n");
}