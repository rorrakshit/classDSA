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
void insbeg(struct node **list,int x){
    
    struct node *p;
    p=*list;
    p=getnode();
    p->info=x;
    p->next=*list;
    *list =p;
}
void traverse(struct node **list){
    
    int c=0;
    struct node *p;
    p=*list;
    while(p!=NULL){
        printf("%d ",p->info);
        p=p->next;
        c++;
    }
    printf("count is: %d",c);
   // return list;
}/*
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
}/*
void delbeg(){
    struct node *p;
    p=start;
    start=p->next;
    int x=p->info;
    free(p);
    printf("%d",x);
    
}/*
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
}*/
struct node* concatlist(struct node **list1,struct node **list2){
 struct node *t;
    t=*list1;
    while(t->next != NULL){
        t=t->next;
    }
    t->next=*list2;
    return *list1;
}
// void orderedins(struct node **start,int x){
//     struct node *p,*q;
//     p=(*start);
//     q=NULL;
//     while(p!=NULL && x>= p->info){
//         q=p; 
//         p->next;
//     }
//     if(q==NULL)
//         insbeg(&(*start),x);
//     else
//         insaft(&q,x);
// }


void main(){
    struct node *start1,*start2,*start3;
    start1=NULL;
    start2=NULL;
    start3=NULL;
    insbeg(&start1,34);
    insbeg(&start1,35);
    insbeg(&start1,36);
    insbeg(&start1,37);
    insbeg(&start1,38);
    
    traverse(&start1);
    printf("\n");
    insbeg(&start2,39);
    insbeg(&start2,40);
    insbeg(&start2,41);
    insbeg(&start2,42);
    insbeg(&start2,43);
    
   
    traverse(&start2);
     printf("\n");
    start3=concatlist(&start1,&start2);
    traverse(&start3);
}