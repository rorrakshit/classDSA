#include<iostream>
using namespace std;
int partition(int a[],int low,int high){
    int mid=(low+high)/2;
    int m=a[low];
    a[low]=a[mid];
    a[mid]=m;
    int i=low;int j=high+1;
    int pivot=a[low];
    do{
        do{
            i++;
        }while(a[i]<pivot);
        do{
            j--;
        }while(a[j]>pivot);
        if(i<j){
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }while(i<j);
    int t=a[j];
    a[j]=a[low];
    a[low]=t;
    return j;
}
void quicksort(int a[],int low,int high){
    if(low<high){
        int j=partition(a,low,high);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}
int main(){
    int low=0;
    int high=8;
    int a[10]={90,160,70,100,200,400,300,350,250};
    a[9]=__INT_MAX__;
    quicksort(a,low,high);
    for(int i=0;i<9;i++){
        cout<<a[i]<<" ";
    }
}