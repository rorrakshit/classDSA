#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *getnode()
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    return p;
}
void insbeg(struct node **start, int x)
{
    struct node *p;
    p = *start;
    p = getnode();

    p->info = x;
    p->next = (*start);
    *start = p;
}
void search(struct node **start, int x)
{
    struct node *p;
    p = *start;
    int c=1;
    while (p != NULL)
    {
        if (x == (p->info))
        {
            printf("Element found at place %d ",c);
            break;
        }
        else
            p = p->next;
        c++;
    }
}
void traverse(struct node **start)
{
    struct node *p;
    p = *start;
    while (p != NULL)
    {
        printf("%d ", p->info);
        p = p->next;
    }
}
int main()
{
    struct node *start;
    start = NULL;
    insbeg(&start, 36);
    insbeg(&start, 35);
    insbeg(&start, 34);
    insbeg(&start, 33);
    insbeg(&start, 32);
    traverse(&start);
    printf("\n");
    search(&start,34);
}
