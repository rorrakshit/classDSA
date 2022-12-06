// ordered collection of items into which items maybe inserted at one end called rear of the queue
// and deleted from another end called front of the queue.

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define TRUE 1
#define FALSE 0
struct queue
{
    int item[10];
    int rear,front;
};

void initialize(struct queue *q)
{
    q->front=0;
    q->rear=-1;
}

int isempty(struct queue *q)
{
    if ((q->rear-q->front+1)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
void enqueue(struct queue *q,char x)
{
    if (q->rear==SIZE-1)
    {
        printf("Queue Overflows");
        exit(1);
    }
    q->rear++;
    q->item[q->rear]=x;
}

char dequeue(struct queue *q)
{
    if (isempty(q))
    {
        printf("Queue Underflows ");
        exit(1);
    }
    char x;
    x=q->item[q->front];
    q->front=q->front+1;
    return x;
}
int main()
{
    struct queue myq;
    initialize(&myq);
    enqueue(&myq,'r');
    enqueue(&myq,'t');
    enqueue(&myq,'p');
    printf("%c",dequeue(&myq));
}

// #include<stdio.h>
// #include<stdlib.h>
// #define FALSE 0
// #define TRUE 1
// #define size 10
// struct queue{
//     int item[10];
//     int rear,front;
// };
// void initialise(struct queue *q){
//     q->front=0;
//     q->rear=-1;
// }
// int isempty(struct queue *q){
//     if((q->rear-q->front+1)==0){
//         return TRUE;
//     }
//     else
//         return FALSE;
// }
// void enqueue(struct queue *q,char x){
//     if(q->rear==(size-1)){
//         printf("stack overflow");
//         exit(1);
//     }
//     q->rear++;
//     q->item[q->rear]=x;
// }
// char dequeue(struct queue *q){
//     if(isempty(q)){
//         printf("stack underflow");
//         exit(1);
//     }
//     char x;
//     x=q->item[q->front];
//     q->front++;
//     return x;
// }
// int main(){
//     struct queue q;
//     initialise(&q);
//     enqueue(&q,'s');
//     enqueue(&q,'w');
//     enqueue(&q,'q');
//     enqueue(&q,'1');
//     printf("%c ",dequeue(&q));
//     printf("%c ",dequeue(&q));
// }