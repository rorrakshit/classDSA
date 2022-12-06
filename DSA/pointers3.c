#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define STACKSIZE 10

struct stack
{
  int item[STACKSIZE];
  int TOP;
};
struct stack s;
void inititalize()
{
  s.TOP=-1;
}
int isEmpty()
{
  if(s.TOP==-1)
    return TRUE;
  else
    return FALSE;
}
int stackTOP()
{
  int x=s.item[s.TOP];
  return x;
}
int pop()
{
  if(isEmpty())
  {
    printf("Stack Underflow\n");
    exit(1);
  }
  int x=s.item[s.TOP];
  s.TOP--;
  return x;
}
void push(int x)
{
  if(s.TOP==(STACKSIZE-1))
  {
    printf("Stack Overflow\n");
    exit(1);
  }
  s.TOP++;
  s.item[s.TOP]=x;
}
void main()
{
    struct stack *p;
    p=(struct stack *p)malloc()
  inititalize();
  /*
  pop();
  */
  push(100);
  printf("%d\n",pop());
  push(200);
  push(300);
  push(400);
  push(500);
  push(600);
  printf("%d\n",stackTOP());
  push(700);
  push(800);
  push(900);
  push(1000);
  push(1100);
  /*
  push(1200);
  */
  for(int i=0;i<5;i++)
    {
      printf("%d\n",pop());
    }
}