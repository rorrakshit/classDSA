#include <stdio.h>
#include<stdlib.h>
#include"cprimitive.h"
void fib(struct node **cs)
{
    struct node *p,*q,*t;
    p=(*cs)->next;
    q=(*cs)->next;
    t=(*cs);
    int m=(*cs)->info;
    
    while(p!=(*cs))
    {
        if((p->info)>m){
            m=p->info;
        }
        p=p->next;
    }
    int dat[m+1];
    for(int j=0;j<=m;j++){
        dat[j]=0;
    }
    int s=0,a=0,b=1;
    while (s<=m)
    {
        
        s=a+b;
        dat[s]++;
        a=b;
        b=s;
    }
    // for(int i=0;i<=m;i++)
    // {
    //     printf("%d ",dat[i]);
    // }

    while(q!=(*cs)){
        if(dat[q->info]==1){
            delaft(&(*cs),t->info);
        }
        else{
            t=t->next;
        }
        q=t->next;
        
    }
    if(dat[q->info]==1){
            delend(&(*cs));
        }
    // return (*cs);
    traverse(&(*cs));

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
    insend(&cs1,32);
    insend(&cs1,8);
    insend(&cs1,9);
    insend(&cs1,10);
    insend(&cs1,11);
    insend(&cs1,12);
    insend(&cs1,13);
    insend(&cs1,14);
    insend(&cs1,15);
    insend(&cs1,16);
    insend(&cs1,17);
    insend(&cs1,18);
    insend(&cs1,19);
    insend(&cs1,20);
    insend(&cs1,21);
    traverse(&cs1);
    printf("\n");
    fib(&cs1);
    // traverse(&cs2);
}