#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;
};
void traverse(struct node *p){
    while(p != NULL){
    printf("%d ",p->info);
    p=p->next;
}
}

int main(){
     struct node *f;
     struct node *s;
     struct node *t;
     f=(struct node*)malloc(sizeof(struct node));
     s=(struct node*)malloc(sizeof(struct node));
     t=(struct node*)malloc(sizeof(struct node));

     f->info=1;
     f->next=s;
     s->info=2;
     s->next=t;
     t->info=3;
     t->next=NULL;
     traverse(f);
}