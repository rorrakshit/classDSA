#include<stdio.h>

void insert(int a[]){
    for (int i = 0; i < 7; i++)
    {
        int k=a[i+1];int j=i;
        while(k<a[j] && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
    }
    for(int i=0;i<8;i++){
        printf("%d ",a[i]);
    }
    
}
int main(){
    int a[8]={4,6,1,9,2,5,8,7};
    insert(a);
}