#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
}*top=NULL;
void push(int num)
{
    struct Node *t=(struct Node *)malloc(sizeof(struct Node));
    t->data=num;
    if(t==NULL)
    {
        printf("Stack is full\n");
    }
    if(top==NULL)
    {
        t->next=NULL;
        top=t;
    }
    else
    {
        t->next=top;
        top=t;
    }
    /* for above if else code you can write
    following few lines : t->next=top; top=t;  */
}
int pop()
{
    int x=-1;
    struct Node *p=top;
    if(top==NULL)
    {
        printf("stack underflow\n");
    }
    else
    {
        x=p->data;
        top=top->next;
        free(p);
    }
    return x;
}
void peek()
{
    if(top==NULL)
    {
        printf("stack underflow\n");
    }
    else
    {
        printf("Top element is : %d\n",top->data);
    }

}
void Display()
{
    struct Node *p=top;
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
    printf("\n");
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    Display();
    printf("popped element is : %d\n",pop());
    peek();
    Display();
    return 0;
}
