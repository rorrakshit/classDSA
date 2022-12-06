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

void initialize(struct queue *cq)
{
    cq->front=SIZE-1;
    cq->rear=SIZE-1;
}

int isempty(struct queue *cq)
{
    if ((cq->rear==cq->front))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
void enqueue(struct queue *cq,char x)
{
    if (cq->rear==SIZE-1)
    {
        printf("Queue Overflows");
        exit(1);
    }
    cq->rear=(cq->rear+1)%SIZE;
    cq->item[cq->rear]=x;
}

char dequeue(struct queue *cq)
{
    if (isempty(cq))
    {
        printf("Queue Underflows ");
        exit(1);
    }
    char x;
    cq->front=(cq->front+1)%SIZE;
    x=cq->item[cq->front];
    
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