#include<stdio.h>
int n;
void arrayqueue(int *a,int x,int i){
    for(int j=n-1;j>=i;j--){
        a[j+1]=a[j];
    }
    a[i]=x;
}
void enqueue(int *a,int x){
    int i=0;
    while(i<n && x>=a[i]){
        i++;
    }
    arrayqueue(a,x,i);
    n++;
}
int main(){
    int a[100];
    n=0;
    enqueue(a,10);
    enqueue(a,3);
    enqueue(a,1);
    enqueue(a,13);
    enqueue(a,13);
    enqueue(a,13);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}