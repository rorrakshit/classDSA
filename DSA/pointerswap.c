#include<stdio.h>
void swap(int* a,int* b){
    int t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int a=12,b=10;
    swap(&a,&b);
    printf("%d %d",a,b);
}