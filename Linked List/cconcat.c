#include <stdio.h>
#include<stdlib.h>
#include"cprimitive.h"
struct node *concate(struct node **s1,struct node **s2)
{
    struct node *p,*q;
    p=(*s1)->next;
    q=(*s2)->next;
    
    (*s1)->next=q;
    (*s2)->next=p;

    return (*s2);

}
int main(){
    struct node *s1,*s2,*s3;
    s1=NULL;
    s2=NULL;
    s3=NULL;
    insend(&s1,1);
    insend(&s1,2);
    insend(&s1,3);
    insend(&s1,4);
    insend(&s1,5);
    insend(&s1,6);
    traverse(&s1);
    printf("\n");
    insend(&s2,7);
    insend(&s2,9);
    insend(&s2,9);
    insend(&s2,9);
    insend(&s2,9);
    insend(&s2,8);
    traverse(&s2);
    printf("\n");
    s3=concate(&s1,&s2);
    traverse(&s3);
    printf("\n");
}