#include<stdio.h>
#include<stdlib.h>
struct node
{
char info;
struct node *next;
};
struct node* getnode()
{
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return p;
}
void insend(struct node **START,char x)
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
int main(){

}