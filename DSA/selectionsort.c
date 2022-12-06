#include<stdio.h>
int main(){
    int a[8]={4,2,8,6,1,9,3,5};
    int min,i;
    for(int j=0;j<8;j++){
        min=j;
    for(int i=j+1;i<8;i++){
        if(a[i]<a[min]){
            
            min=i;
            
        }
    }
    if(min!=i){
    int t=a[j];
    a[j]=a[min];a[min]=t;
    }
}
for(int i=0;i<8;i++){
    printf("%d ",a[i]);
}
}