#include<stdio.h>
#include<stdlib.h>
struct Queue
{
    int size;
    int rear;
    int front;
    int *Q;
};
void create(struct Queue *q)
{
    printf("Enter size : \n");
    scanf("%d",&q->size);
    q->rear=q->front=-1;
    q->Q=(int *)malloc(q->size*sizeof(int));
}
void enqueue(struct Queue *q,int num)
{
    if(q->rear==q->size-1)
        printf("Stack overflow\n");
    else
    {
        q->rear++;
        q->Q[q->rear]=num;
    }
}
int dequeue(struct Queue *q)
{
    int x=0;
    if(q->front==q->rear)
        printf("Stack underflow\n");
    else
        {
                        q->front++;

            x=q->Q[q->front];
        }
    return x;
}
void Display(struct Queue q)
{
    for(int i=q.front+1;i<=q.rear;i++)
    {
        printf("%d",q.Q[i]);
    }
    printf("\n");
}
int main()
{
    struct Queue q;
    create(&q);
    enqueue(&q,1);

    Display(q);
    printf("deleted element : %d\n",dequeue(&q));
    Display(q);
    return 0;
}
