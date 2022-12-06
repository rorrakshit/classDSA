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
struct node* merge(struct node **start1,struct node **start2)
{
    struct node *p,*q,*t;
    p=*start1;
    q=*start2;
    t=NULL;
    while(p!=NULL && q!=NULL)
    {
        if(p->info < q->info)
        {
            insend(&t,p->info);
            p=p->next;
        }
        else
        {
            if(q->info < p->info)
            {
                insend(&t,q->info);
                q=q->next;
            }
            else
            {
                insend(&t,q->info);
                insend(&t,p->info);
                p=p->next;q=q->next;
            }
        }
    }
    while(p!=NULL)
    {
        insend(&t,p->info);
        p=p->next;
    }
    while(q!=NULL)
    {
        insend(&t,q->info);
        q=q->next;
    }
    return t;
}
struct node* union1(struct node **start1,struct node **start2)
{
    struct node *p,*q,*t;
    p=*start1;
    q=*start2;
    t=NULL;
    while(p!=NULL && q!=NULL)
    {
        if(p->info < q->info)
        {
            insend(&t,p->info);
            p=p->next;
        }
        else
        {
            if(q->info < p->info)
            {
                insend(&t,q->info);
                q=q->next;
            }
            else
            {
                insend(&t,q->info);
                // insend(&t,p->info);
                p=p->next;q=q->next;
            }
        }
    }
    while(p!=NULL)
    {
        insend(&t,p->info);
        p=p->next;
    }
    while(q!=NULL)
    {
        insend(&t,q->info);
        q=q->next;
    }
    return t;
}
struct node* intersection(struct node **start1,struct node **start2)
{
    struct node *p,*q,*t;
    p=*start1;
    q=*start2;
    t=NULL;
    while(p!=NULL && q!=NULL)
    {
        if(p->info < q->info)
        {
            // insend(&t,p->info);
            p=p->next;
        }
        else
        {
            if(q->info < p->info)
            {
                // insend(&t,q->info);
                q=q->next;
            }
            else
            {
                insend(&t,q->info);
                // insend(&t,p->info);
                p=p->next;q=q->next;
            }
        }
    }
    // while(p!=NULL)
    // {
    //     insend(&t,p->info);
    //     p=p->next;
    // }
    // while(q!=NULL)
    // {
    //     insend(&t,q->info);
    //     q=q->next;
    // }
    return t;
}
struct node* difference(struct node **start1,struct node **start2)
{
    struct node *p,*q,*t;
    p=*start1;
    q=*start2;
    t=NULL;
    while(p!=NULL && q!=NULL)
    {
        if(p->info < q->info)
        {
            insend(&t,p->info);
            p=p->next;
        }
        else
        {
            if(q->info < p->info)
            {
                // insend(&t,q->info);
                q=q->next;
            }
            else
            {
                // insend(&t,q->info);
                // insend(&t,p->info);
                p=p->next;q=q->next;
            }
        }
    }
    while(p!=NULL)
    {
        insend(&t,p->info);
        p=p->next;
    }
    // while(q!=NULL)
    // {
    //     insend(&t,q->info);
    //     q=q->next;
    // }
    return t;
}
struct node* symdifference(struct node **start1,struct node **start2)
{
    struct node *p,*q,*t;
    p=*start1;
    q=*start2;
    t=NULL;
    while(p!=NULL && q!=NULL)
    {
        if(p->info < q->info)
        {
            insend(&t,p->info);
            p=p->next;
        }
        else
        {
            if(q->info < p->info)
            {
                insend(&t,q->info);
                q=q->next;
            }
            else
            {
                // insend(&t,q->info);
                // insend(&t,p->info);
                p=p->next;q=q->next;
            }
        }
    }
    while(p!=NULL)
    {
        insend(&t,p->info);
        p=p->next;
    }
    while(q!=NULL)
    {
        insend(&t,q->info);
        q=q->next;
    }
    return t;
}


int main()
{
    struct node *start1,*start2,*start3;
    start1 = NULL;
    start2 = NULL;
    start3 = NULL;
    insend(&start1, 36);
    insbeg(&start1, 35);
    // insbeg(&start1, 34);
    // insbeg(&start1, 33);
    insbeg(&start1, 32);
    traverse(&start1);
    printf("\n");
    insbeg(&start2, 35);
    insbeg(&start2, 33);
    insbeg(&start2, 15);
    insbeg(&start2, 12);
    traverse(&start2);
    printf("\n");
    start3=union1(&start1,&start2);
    traverse(&start3);
}