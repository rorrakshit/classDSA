#include<stdio.h>
#include<malloc.h>
struct student{
    int rollno;
    char name[20];
    double per;
};
int main(){
    // struct student s[10];
    struct student *ptr;
    // ptr=&s[10];
    int n;
    scanf("%d",&n);
    ptr=(struct student*)malloc(n*sizeof(struct student));

for(int i=0;i<n;i++){
    scanf("%d%s%lf",&(ptr+i)->rollno,(ptr+i)->name,&(ptr+i)->per);
}
printf("output\n");
for(int i=0;i<n;i++){
    printf("%d %s %lf\n",(ptr+i)->rollno,(ptr+i)->name,(ptr+i)->per);
}
// for(int i=0;i<2;i++){
//     scanf("%d%s%lf",&(ptr+i)->rollno,(ptr+i)->name,&(ptr+i)->per);
// }
// printf("output\n");
// for(int i=0;i<2;i++){
//     printf("%d %s %lf\n",(ptr+i)->rollno,(ptr+i)->name,(ptr+i)->per);
// } 
}