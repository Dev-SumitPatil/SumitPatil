#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
}*first=NULL,*last=NULL,*second=NULL,*third=NULL;
void create(int A[],int n)
{
    int i;
    struct Node *t,* last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void create2(int A[],int n)
{
    int i;
    struct Node *t,* last;
    second=(struct Node *)malloc(sizeof(struct Node));
    second->data=A[0];
    second->next=NULL;
    last=second;
    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void Display(struct Node* p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void RDisplay(struct Node *p)
{
    if(p!=NULL)
    {
        printf("%d ",p->data);
        RDisplay(p->next);
    }
}
int count(struct Node* p)
{
    int l=0;
    while(p)
    {
        l++;
        p=p->next;
    }
    return l;
}
int Rcount(struct Node *p)
{
    if(p!=NULL)
        return Rcount(p->next)+1;
    else
        return 0;
}
int sum(struct Node* p)
{
    int s=0;
    while(p!=NULL)
    {
        s=s+(p->data);
        p=p->next;
    }
    return s;
}
int Rsum(struct Node *p)
{
    if(p!=NULL)
        return Rsum(p->next)+p->data;
    else
        return 0;
}
int Max(struct Node *p)
{
    int max=INT_MIN;
    while(p!=NULL)
    {
        if(p->data>max)
        {
            max=p->data;
        }
        p=p->next;
    }
    return max;
}
int Rmax(struct Node *p)
{
    int x=0;
    if(p==0)
        return INT_MIN;
    x=Rmax(p->next);
    if(x>p->data)
        return x;
    else
        return p->data;
}
struct Node * Lsearch(struct Node *p,int key)
{   struct Node *q=NULL;
    while(p!=NULL)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }

        q=p;
        p=p->next;
    }
    return NULL;
};
struct Node * RLsearch(struct Node *p,int key)
{
    if(p==NULL) return NULL;
    if(key==p->data) return p;
    return RLsearch(p->next,key);
};
void Insert(int index,int x)
{
    struct Node* t,*q,*p;
    p=first;
    q=first;
    if(index<0 || index>count(p))
        return;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    if(index==0)
    {
        t->next=first;
        first=t;
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
while(q!=NULL)
{
    last=q;
    q=q->next;
}

}
void InsertLast(int x)
{
    struct Node *t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=last=t;
    }
    else
    {
        last->next=t;
    last=t;
    }
}
void InsertinSort(int x)
{
    struct Node *p=first,*t,*q=NULL,*w=first;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=t;
    }
    else
    {
        while(p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==first)
        {
            t->next=first;
            first=t;
        }
        else
        {
            t->next=q->next;
            q->next=t;
        }
    }
    while(w!=NULL)
{
    last=w;
    w=w->next;
}

}
int isSorted()
{
    struct Node *p=first;
    int x=-65536;
    while(p!=NULL)
    {
        if(p->data<x)
            return 0;
        x=p->data;
        p=p->next;
    }
    return 1;
}
int Delete(int pos)
{
    struct Node* p=first,*q=NULL,*w=first;
    int x=-1;
    if(pos<1 || pos>count(p)) return -1;
    if(pos==1)
    {
        q=first;
        x=first->data;
        first=first->next;
        free(q);
        return x;
    }
    else
    {
        for(int i=0;i<pos-1;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        free(p);
        return x;
    }
    while(w!=NULL)
{
    last=w;
    w=w->next;
}
}
void RemoveDuplicate()
{
    struct Node *p=first;
    struct Node *q=p->next;
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
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
void Reverse1()
{
    struct Node* p=first,*q=first;
    int *A;
    int i=0;
    A=(int *)malloc(sizeof(int)*count(p));
    while(q!=NULL)
    {
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;//go back to last element
    while(q!=NULL)
    {
        q->data=A[i];
        q=q->next;
        i--;
    }
}
void Reverse2()//sliding pointers
{
    struct Node *p=first,*q=NULL,*r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}
void Reverse3()  //not working
{
struct Node *p=first,*q=NULL;
if(p)
{
    Reverse3(p,p->next);
    p->next=q;
}
else
    first=q;

}
void Concat(struct Node *p,struct Node *q)
{
    third=p;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;
}
void Merge(struct Node *p,struct Node *q)
{
    struct Node *lastptr;
    if(p->data<q->data)
    {
        third=last=p;
        p=p->next;
        third->next=NULL;
    }
    else
    {
        third=last=q;
        q=q->next;
        third->next=NULL;
    }
    while(p && q)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p)last->next=p;
    if(q)last->next=q;
}
int isLoop(struct Node* f)
{
    struct Node *p,*q;
    p=q=first;
    do
    {
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    }while(p && q && p!=q);
    if(p==q)
        return 1;
    else
        return 0;
}
int main()
{
    //checking if there is loop
    struct Node *t1,*t2;
    int A[]={10,20,30,40,50};
    create(A,5);
    t1=first->next->next;
    t2=first->next->next->next->next;
    t2->next=t1;
    printf("%d \n",isLoop(first));
    /*int A[]={10,20,30,40,50};
    int B[]={5,15,25,35,45};
    create(A,5);
    create2(B,5);
    printf("First\n");Display(first);
    printf("\nSecond\n");Display(second);
    printf("\Merge\n ");
     Merge(first,second);
    Display(third);
    printf("\n");*/
    /*InsertLast(1);
    Insert(1,2);
    Insert(2,3);
    Insert(3,3);
    Insert(4,4);
    Insert(5,4);
    InsertinSort(0);
    RemoveDuplicate();*/
    //Reverse3();  not working

    //InsertLast(5);
    //InsertLast(5);
  //struct Node *temp;
  //  int A[]={3,5,7,1};
    //create(A,4);

    /*temp=Lsearch(first,7);
    if(temp!=NULL)
        printf("Found %d\n",temp->data);
    else printf("Not found");
    Display(first);
    */

    //printf("\nSorted= %d",isSorted());
        return 0;
}
