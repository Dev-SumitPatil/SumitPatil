#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*head=NULL;
void Display()
{
    struct Node *p=head;
    if(head==NULL)
    {
        printf("Empty List \n");
    }
    do
    {
        printf("%d ",p->data);
        p=p->next;
    }while(p!=head);
    printf("\n");
}
int Count(struct Node *p)
{
    int count=0;
    if(head==NULL)
    {
        count=0;
        return count;
    }
    do
    {
        count++;
        p=p->next;
    }while(p!=head);
    return count;
}
void Insert(int index,int num)
{
    struct Node *t=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    t->data=num;
    if(index<0||index>Count(head))
        return;
    if(index==0){
    if(head==NULL)
    {
        head=t;
        head->next=head;
    }
    else
    {
        while(p->next!=head)p=p->next;
        p->next=t;
        t->next=head;
        head=t;
    }
    }
    else{
        for(int i=0;i<index-1;i++)p=p->next;
        t->next=p->next;
        p->next=t;
    }
}
void Delete(int index)
{
    struct Node *p=head;
    struct Node *q=head;
    if(index<0||index>Count(p))
        return;
    if(index==0)
    {
        while(p->next!=head)p=p->next;
        if(p==head)
        {
            free(p);
            head==NULL;
        }
        else{
            p->next=head->next;
            free(head);
            head=p->next;
        }
    }
    else{
        for(int i=0;i<index-1;i++)
            p=p->next;
        q=p->next;
        p->next=q->next;
        free(q);
    }
}
int main()
{
    Insert(0,1);
    Insert(1,2);
    Insert(2,3);
    Insert(3,4);
    Delete(0);
    Delete(1);
    Display();
    return 0;
}
