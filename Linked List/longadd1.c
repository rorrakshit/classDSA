#include<stdio.h>
#include"link.h"
#include<string.h>
#include<stdlib.h>
struct node* add(struct node **start1,struct node **start2)
{
    struct node *p,*q,*m;
    int t,s,c=0;
    // p=*start1;
    // q=*start2;
    m=NULL;
    p=reverse(&(*start1));
    q=reverse(&(*start2));
    while(p!=NULL && q!=NULL)
    {
        t=(p->info)+(q->info)+c;
        s=t%10000;
        c=t/10000;
        insbeg(&m,s);
        p=p->next;
        q=q->next;
        
    }
    while(p!=NULL)
    {
        t=(p->info)+c;
        s=t%10000;
        c=t/10000;
        p=p->next;
        insbeg(&m,s);
    }
    while(q!=NULL)
    {
        t=(q->info)+c;
        s=t%10000;
        c=t/10000;
        q=q->next;
        insbeg(&m,s);
    }
    if(c>0){
        insbeg(&m,c);
    }
    return m;
}
int main()
{
    struct node *s1,*s2,*s3;
    char a[100],b[100];
    s1=NULL;
    s2=NULL;
    printf("Enter first string");
    gets(a);
    printf("Enter second string");
    gets(b);
    printf("%s\n",a);
    printf("%s\n",b);
    int l1=strlen(a);
    int l2=strlen(b);
    int r1=l1%4;
    int r2=l2%4;
    int p1=l1/4;
    int p2=l2/4;
    int r11=r1;
    int r22=r2;
    for(int i=0;i<p1;i++)
    {
        char t[5];
        for(int j=0;j<4;j++)
        {
            t[j]=a[r11];
            r11++;
        }
        insend(&s1,atoi(t));
    }
    if(r1!=0)
    {
        char t1[r1];
        for(int i=0;i<r1;i++)
        {
            t1[i]=a[i];
        }
        insbeg(&s1,atoi(t1));
    }
    for(int i=0;i<p2;i++)
    {
        char t[5];
        for(int j=0;j<4;j++)
        {
            t[j]=b[r22];
            r22++;
        }
        insend(&s2,atoi(t));
    }
    if(r2!=0)
    {
        char t2[r2];
        for(int i=0;i<r2;i++)
        {
            t2[i]=b[i];
        }
        insbeg(&s2,atoi(t2));
    }
    traverse(&s1);
    printf("\n");
    
    traverse(&s2);
    printf("\n");
    s3=add(&s1,&s2);
    traverse1(&s3);

}