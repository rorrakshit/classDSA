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
struct node* concat(struct node **start1,struct node **start2){
    struct node *p,*q;
    p=*start1;
    q=*start2;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=*start2;
    return *start1;
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
    struct node *start1,*start2,*start3;
    start1=NULL;
    start2=NULL;
    start3=NULL;
      insbeg(&start1,37);
      insbeg(&start1,34);
      insbeg(&start1,36);
      insbeg(&start1,35);
      traverse(&start1);
      printf("\n");
      insbeg(&start2,46);
      insbeg(&start2,47);
      insbeg(&start2,45);
      insbeg(&start2,48);
      traverse(&start2);
      printf("\n");
      start3=concat(&start1,&start2);
    traverse(&start3);
}