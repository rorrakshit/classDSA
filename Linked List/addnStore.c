#include <stdio.h>
#include<stdlib.h>
#include"cprimitive.h"
struct node* add(struct node **cs)
{
    struct node *p,*q,*m;
    int s=0;
    m=NULL;
    p=(*cs)->next;
    q=(*cs)->next;
    while(p!=(*cs))
    {
        s=s+(p->info);
        p=p->next;
    }
    s=s+(p->info);
    while(q!=(*cs))
    {
        q->info=s-(q->info);
        insend(&m,q->info);
        q=q->next;
    }
    q->info=s-(q->info);
    insend(&m,q->info);
    return m;

}
int main(){
    struct node *cs1,*cs2;
    cs1=NULL;
    cs2=NULL;
    insend(&cs1,1);
    insend(&cs1,2);
    insend(&cs1,3);
    insend(&cs1,4);
    insend(&cs1,5);
    insend(&cs1,6);
    insend(&cs1,7);
    traverse(&cs1);
    printf("\n");
    cs2=add(&cs1);
    traverse(&cs2);
}