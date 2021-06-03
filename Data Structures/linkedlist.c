#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
};
struct Node * head=NULL;
void Insert(int index,int num)
{
    struct Node * temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=num;
    if(index==0)
    {
        temp->next=head;
        head=temp;
    }
    if(index>0 && index<=Count(head))
    {   struct Node *p=head;
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        temp->next=p->next;
        p->next=temp;
    }
}
void Display()
{    struct Node *p=head;
    while(p!=NULL)
    {
        printf("%d  ",p->data);
        p=p->next;
    }
    printf("\n");
}
int Count(struct Node * p)
{
   int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}
void Append(int num)
{
    struct Node * temp=(struct Node*)malloc(sizeof(struct Node));
    struct Node * p=head;
    temp->data=num;
    if(head==NULL)
    {

        head=temp;
        temp->next=NULL;
    }
    else{
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=temp;
    temp->next=NULL;
    }
}
void Delete(int index)
{
    struct Node * p=head;
    struct Node * q=head;
    if(index==0)
    {
        head=head->next;
        free(p);
    }
    if(index>0 && index<Count(head))
    {
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        q->next=NULL;
        free(q);
    }

}
void Sum()
{
    int sum=0;
    struct Node* p=head;
    while(p)
    {
        sum+=p->data;
        p=p->next;
    }
    printf("Sum is %d",sum);
}
void Max()
{
    int max=head->data;
    struct Node *p =head;
    while(p)
    {
        if(p->data>max) max=p->data;
        p=p->next;
    }
    printf("Maximum element is %d",max);
}
void Min()
{
    int min=head->data;
    struct Node *p =head;
    while(p)
    {
        if(p->data<min) min=p->data;
        p=p->next;
    }
    printf("Minimum element is %d",min);
}
void Remove_duplicate()
{
    struct Node *p=head;
    struct Node* q=p->next;
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
                        free(q);
                        q=p->next;
        }
    }
}
void Reverse(){
struct Node * prev=NULL;
struct Node * current=head;
struct Node * next=NULL;
while(current!=NULL)
{
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
}
head=prev;
}
int isLoop()
{ struct Node * p,*q =head;
do{
    p=p->next;q=q->next;
    q=q?q->next:q;
}
while(p&&q&&p!=q);
if(p==q)
    return 1;
else
    return 0;
}
int main()
{
   int ch;
    int index;
    int num;
    int c;
while(1)
{
    printf("1.Insert 2.Append 3.Delete 4.Sum 5.Max 6.Min 7.Count 8.Reverse 9.isLoop 10.RemoveDuplicate 11.Exit\n");
    printf("Enter your choice : \n ");
    scanf("%d",&ch);
    switch(ch){
    case 1:
        printf("Enter index and number: \n");
        scanf("%d %d",&index,&num);
        Insert(index,num);
        Display();
        break;
    case 2:
        printf("Enter a number: \n");
        scanf("%d",&num);
        Append(num);
        Display();
        break;
    case 3:
        printf("Enter an index: \n");
        scanf("%d ",&index);
        Delete(index);
        Display();
        break;
    case 4:
        Sum();
        break;
    case 5:
        Max();
        break;
    case 6:
        Min();
        break;
    case 7:

        c=Count(head);
        printf("%d\n",c);
        break;
    case 8:
        Reverse();
        Display();
        break;
    case 9:
        printf("IsLoop : %d\n",isLoop());
        break;
    case 10:
        Remove_duplicate();
        Display();
        break;
    case 11:
        exit(0);
    Default:
        printf("Invalid choice\n");
    }
}
}
