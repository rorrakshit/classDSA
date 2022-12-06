#include<stdio.h>
int bubblesort(int a[]){
    for(int j=7;j>0;j--){
        for(int i=0;i<j;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
int main(){
      int a[8]={9,5,2,4,8,7,1,6};
      bubblesort(a);
      for(int i=0;i<8;i++){
        printf("%d ",a[i]);
      }
}