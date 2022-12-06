#include<stdio.h>
#include<stdlib.h>
#include"link.h"
void del(struct node **s,int k){
    struct node *p,*q;
    p=(*s);
    int i=1;
    while(i<=k){
        i++;
        if(p!=NULL)
            p=p->next;
        else{
            printf("void deletion");
            exit(1);
        }
    }
    q=(*s);
    if(p!=NULL){
    while (p->next!=NULL)
    {
        /* code */
        q=q->next;
        p=p->next;
    }
    delaft(&q);
    }
    else{
        delbeg(&(*s));
    }
    
}
int main(){
    struct node *s;
    s=NULL;
    insend(&s,5);
    insend(&s,8);
    insend(&s,1);
    insend(&s,6);
    insend(&s,3);
    del(&s,3);
    traverse(&s);
}