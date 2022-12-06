#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 15
#define true 1
#define false 0

int item[STACKSIZE];
int top0;
int top1;
int top2;

void initialize0(index)
{
    top0=index;
    top1=index;
    top2=index;
}
int isempty0()
{
    if(top0==-1)
        return true;
    else
        return false;
}


void push0(int x)
{
    if (top0==STACKSIZE-1)
    {
        printf("STACK OVERFLOW");
        exit(1);
    }
    top0=top0+1;
    item[top0]=x;
}
void push1(int x)
{
    if (top1==STACKSIZE-1)
    {
        printf("STACK OVERFLOW");
        exit(1);
    }
    top1=top1+1;
    item[top1]=x;
}
void push2(int x)
{
    if (top2==STACKSIZE-1)
    {
        printf("STACK OVERFLOW");
        exit(1);
    }
    top2=top2+1;
    item[top2]=x;
}

int pop0()
{
    if(isempty0())
    {
        printf("STACK UNDERFLOW");
        exit(1);
    }
    int x;
    x=item[top0];
    top0=top0-1;
    return x;

}
int pop1()
{
    int x;
    x=item[top1];
    top1=top1-1;
    return x;

}
int pop2()
{
    int x;
    x=item[top2];
    top2=top2-1;
    return x;

}
int stacktop0()
{
    int x;
    x=item[top0];
    return x;
}
int main()
{
    initialize0();
    push0(3);
    push1(5);
    push2(9);
    int i,l,n,m;
    int index=n/m*i-1;
    for(i=0;i<16;i++)
    {
    printf("%d",item[i]);
    }
    printf("\n");
    stacktop0();
    l=pop0();
    printf("%d",l);
}