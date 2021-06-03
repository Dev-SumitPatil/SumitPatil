#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node*head=NULL;
void Display()
{
    struct Node *p=head;
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
/*void ReverseDisplay()
{
    struct Node *p;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    while(p!=head)
    {
        printf("%d ",p->data);
        p=p->prev;
    }
}
*/
int Count()
{
    struct Node *p=head;
    int count=0;
    while(p)
    {
        count++;
        p=p->next;
    }
    return count;
}
void Insert(int index,int num)
{
    struct Node *t=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    t->data=num;
    if(index<0||index>Count())
        return;
    if(index==0)
    {
        if(head==NULL)
        {
            head=t;
            t->prev=NULL;
            t->next=NULL;
        }
        else
        {
            t->next=head;
            t->prev=NULL;
            head->prev=t;
            head=t;
        }
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
        t->prev=p;
        if(t->next!=NULL)
        t->next->prev=t;
    }
}
void Delete(int index)
{
    struct Node *p=head;
    struct Node *q=head;
    if(index<0||index>=Count()) return;
    if(head==NULL) printf("Empty Linked List");
    if(index==0)
    {
        head=head->next;
        head->prev=NULL;
        free(p);
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        q->next->prev=p;
        free(q);
    }
}
int main()
{
    Insert(0,1);
    Insert(1,2);
    Display();
    return 0;
}
