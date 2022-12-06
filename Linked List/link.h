#include <stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *next;
};
/***********************/
 void delaft(struct node **p)
 {
 int x;
 struct node *q;
 q=(*p)->next;
 (*p)->next=q->next;
 x=q->info;
 free(q);
//  return x;
 }
/********************/
struct node* getnode()
{
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return p;
}
/*******************/
void insbeg(struct node **START,int x)
{
  struct node *p;
  p=getnode();
    p->info=x;
  p->next=*START;
  *START=p;
}
/****************/
int delbeg(struct node **START)
 {
 struct node *p;
 int x;
 p=(*START);
 (*START)=(*START)->next;
 x=p->info;
 free(p);
 return x;
 }
 /****************/
void insend(struct node **START,int x)
{
  struct node *q,*p;
  q=*START;
  if(q==NULL)
  {
    insbeg(START,x);
  }
  else
  {
    while(q->next!=NULL)
    q=q->next;
    p=getnode();
    p->info=x;
    p->next=NULL;
    q->next=p;
    }
}
/*****************/
void traverse(struct node **START)
{
  struct node *p;
  p=*START;
  while(p!=NULL)
    {
      printf("%d\t",p->info);
      p=p->next;
    }
}
void traverse1(struct node **START)
{
  struct node *p;
  p=*START;
  while(p!=NULL)
    {
      printf("%d",p->info);
      p=p->next;
    }
}
struct node *reverse(struct node **start)
{
struct node *p,*n,*c;
c=*start;
p=NULL;
n=c->next;
while (c!=NULL)
{
    c->next=p;
    p=c;
    c=n;
    if (n!=NULL)
    {
        n=n->next;
    }
}
*start=p;
return *start;
}