#include<malloc.h>
#include<stdio.h>
// void traverse(int *p,int n){
//     int i;
//     for(i=0;i<n;i++){
//         printf("%d ",*(p+i));
//     }
// }
// int main(){
//     int a[]={1,2,3,4,5,6,7,8,9,10};
//     traverse(a,10);
// }
void input(int n,int *p){
    
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    
}
void output(int n,int *p){
    for(int i=0;i<n;i++){
        printf("%d ",*(p+i));
    }

}
struct student{ 
    int rollno;
    char name[20];
    double per;
};
int main(){
    int*p;int n;char*q;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    input(n,p);
    q=(char*)malloc(10);
    output(n,p);
    
    // printf("\n%d",sizeof(long long));
    struct student s;


}