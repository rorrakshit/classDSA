#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *getnode()
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    return p;
}
void insbeg(struct node **start, int x)
{
    struct node *p;
    p = *start;
    p = getnode();

    p->info = x;
    p->next = (*start);
    *start = p;
}
void traverse(struct node **start)
{
    struct node *p;
    p = *start;
    while (p != NULL)
    {
        printf("%d ", p->info);
        p = p->next;
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

int main()
{
    struct node *start1,*start2;
    start1 = NULL;
    start2 = NULL;
    insbeg(&start1, 36);
    insbeg(&start1, 35);
    insbeg(&start1, 34);
    insbeg(&start1, 33);
    insbeg(&start1, 32);
    traverse(&start1);
    printf("\n");
    start2=reverse(&start1);
    traverse(&start2);
}