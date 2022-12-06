#include <stdio.h>
#include<stdlib.h>
#include"cprimitive.h"
int main(){
    struct node *p;
    p=NULL;
    insbeg(&p,6);
    insbeg(&p,5);
    insbeg(&p,4);
    insbeg(&p,3);
    insbeg(&p,2);
    insbeg(&p,1);
    traverse(&p);
    printf("\n");
    delbeg(&p);
    traverse(&p);
    printf("\n");
    delbeg(&p);
    traverse(&p);
}