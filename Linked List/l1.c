#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;
};
struct node *start;

struct node *getnode(){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void insbeg(int x){
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=start;
    start=p;
}
void traverse(){
    struct node *p;
    int c=0;
    p=start;
    while(p!=NULL){
        printf("%d ",p->info);
        p=p->next;
        c++;
    }
    printf("count is: %d",c);
}
void insend(int x){
    struct node *q,*p;
    q=start;
    while(q->next!=NULL){ 
        q=q->next;
    }
    p=getnode();
    p->info=x;
    p->next=NULL;
    q->next=p;
}
void delbeg(){
    struct node *p;
    p=start;
    start=p->next;
    int x=p->info;
    free(p);
    printf("%d",x);
    
}
void delend(){
    struct node *p,*q;

    p=start;
    q=NULL;
    while((p->next)!=NULL){
        q=p;
        p=p->next;
    }
    
    q->next=NULL;
    free(p);
}


int main(){
    start=NULL;
    insbeg(34);
    insbeg(89);
    insbeg(12);
    insbeg(45);
    
    traverse();
    printf("\n");
    delend();
    printf("\n");
    traverse();
    
    
}