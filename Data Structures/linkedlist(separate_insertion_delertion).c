#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void Display()
{
    struct Node *p=head;
    if(head==NULL)printf("Empty\n");
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int Count()
{
    int count=0;
    struct Node *p=head;
    while(p)
    {
        count++;
        p=p->next;
    }
    return count;
}
void insertAtBegin(int num)
{
    struct Node *t=(struct Node *)malloc(sizeof(struct Node));
    t->data=num;
    t->next=NULL;
    if(head==NULL)
    {
        head=t;
    }
    else
    {
        t->next=head;
        head=t;
    }
}
void insertAtEnd(int num)
{
    struct Node *t=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    t->data=num;
    t->next=NULL;
    if(head==NULL)
    {
        head=t;
    }
    else
    {
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=t;

    }
}
void insertAtPos(int index,int num)
{
    struct Node *t=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    t->data=num;
    t->next=NULL;
    if(index==0)
    {
        insertAtBegin(t->data);
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}
void deleteFromBegin()
{
    struct Node *p=head;
    head=p->next;
    free(p);
    p=NULL;
}
void deleteAtEnd()
{
    struct Node *p=head;
    struct Node *temp=head;
    if(p->next==NULL)
    {
        free(p);
        head=NULL;
    }
    else
    {
        for(int i=1;i<Count()-1;i++)
        {
            p=p->next;
        }
        temp=p->next;
        free(temp);
        p->next=NULL;
    }
}
void deleteAtIndex(int index)
{
    struct Node *p=head;
    struct Node *temp=head;
    if(index==0)
    {
        deleteFromBegin();
    }
    else{
    for(int i=0;i<index-1;i++)p=p->next;
    temp=p->next;
    p->next=temp->next;
    free(temp);
}
}
void DeleteLinkedList()
{
    struct Node *current=head;
    struct Node *next=NULL;
    while(current !=NULL)
    {
        next=current->next;
        free(current);
        current =next;
    }
    head=NULL;
}
int Search(int key)
{
    struct Node *p=head;
    while(p!=NULL)
    {
        if(p->data==key)
            return 1;
        p=p->next;
    }
    return 0;
}
int middle()
{
    struct Node *fast=head;
    struct Node *slow=head;
    if(head!=NULL)
    {
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
    }
    return slow->data;
}
int frequency(int key)
{
    struct Node *p=head;
    int fre=0;
    while(p)
    {
        if(p->data==key)
            fre++;
        p=p->next;
    }
    return fre;
}
int countLoop(struct Node*n)
{
    int res=1;
    struct Node *temp=n;
    while(temp->next!=n)
    {
        res++;
        temp=temp->next;
    }
    return res;
}
int detectCountLoop()
{
    struct Node * slow=head,*fast=head;
    while(fast && slow && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return countLoop(slow);
    }}
    return 0;
}
void RemoveDuplicates()
{
    struct Node *p=head;
    struct Node *q=p->next;
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {p=q;
        q=q->next;
        }
        else
        {
            p->next=q->next;
            free(q);
            q=p->next;
        }
    }
}
void MoveToFront()
{
    if(head==NULL||head->next==NULL)
        return;
    struct Node *secLast=NULL;
    struct Node *last=head;
    while(last->next!=NULL)
    {
        secLast=last;
        last=last->next;
    }
    secLast->next=NULL;
    last->next=head;
    head=last;
}
void segregateEvenOdd()
{
    struct Node *evenStart=NULL;
    struct Node *evenEnd=NULL;
    struct Node *oddStart=NULL;
    struct Node *oddEnd=NULL;
    struct Node *current=head;
    while(current!=NULL)
    {
        int val=current->data;
        if(val%2==0)
        {
            if(evenStart==NULL)
            {
                evenStart=current;
                evenEnd=evenStart;
            }
            else
            {
                evenEnd->next=current;
                evenEnd=evenEnd->next;
            }
        }
        else
        {
            if(oddStart==NULL)
            {
                oddStart=current;
                oddEnd=oddStart;
            }
            else
            {
                oddEnd->next=current;
                oddEnd=oddEnd->next;
            }

        }
           current=current->next;
    }
        if(oddStart==NULL||evenStart==NULL)
            return;
        evenEnd->next=oddStart;
        oddEnd->next=NULL;
        head=evenStart;
    }
    void Reverse()
    {
        struct Node* next=NULL,*prev =NULL;
        struct Node *current=head;
        while(current!=NULL)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;
    }
int main()
{
    insertAtPos(0,1);
    insertAtPos(1,2);
    insertAtPos(2,3);
    insertAtPos(3,4);
    insertAtPos(4,5);
    insertAtPos(5,6);
    insertAtPos(6,7);
    insertAtBegin(8);
    insertAtEnd(9);
    Display();
    Reverse();
    Display();
    //segregateEvenOdd();
    //Display();
    //MoveToFront();
    //Display();
    //RemoveDuplicates();
    //Display();
   // printf("%d",detectCountLoop());
    //printf("%d",frequency(4));
    //printf("%d",middle());
   // printf("%d",Search(11));
    //DeleteLinkedList();
    //Display();
    return 0;
}
