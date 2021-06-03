#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*front=NULL,*rear=NULL;
void enqueue(int num)
{
    struct Node *t=(struct Node *)malloc(sizeof(struct Node));
    t->data=num;
    if(t==NULL)
    {
        printf("Queue is full\n");
    }
    else
    {
        t->next=NULL;
        if(front==NULL)
        {
            front=rear=t;
        }
        else
        {
            rear->next=t;
            rear=t;
        }
    }
}
int dequeue()
{
    int x=-1;
    struct Node *t=front;
    if(front==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        free(t);
    }
    return x;
}
void Display()
{
    struct Node * p=front;
    while(p)
    {
        printf("%d",p->data);
        p=p->next;
    }
    printf("/n");
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    Display();
    printf("Deleted elemnt : %d\n",dequeue());
    Display();
    return 0;
}
