#include<stdlib.h>
#include<stdio.h>
int A[10]={};
int length=0;
int size=10;
void Display()
{
    for(int i=0;i<length;i++)
    {
         printf("%d ",A[i]);
    }
}
void Append(int num)
{
    if(length<size)      //length==size then also we can't insert as there is no space available
    {
        A[length]=num; //[1,2,3] length=3 then ele will be inserted in A[length] which is A[3] i.e. fourth element
        //for that length<size
        length++; //increment the length
    }
}
void Insert(int index,int num)
{
    if(index>=0 && index<=length) //assumed that cannot insert in an empty space at the index greater than length
    {
        for(int i=length;i>index;i--) // A[1,2,3,4,5,6,7] Insert(3,12) for(int i=7;i>3;i--){A[i]=A[i-1];}
        {
            A[i]=A[i-1];
        }
        A[index]=num;
        length++;
    }
}
int Delete(int index)
{
    int x=0;
    x=A[index];
    if(index>=0 && index<length)
    {
        for(int i=index;i<length-1;i++)
        {A[i]=A[i+1];}
        length--;
    return x;
    }
return 0;
}

void swap(int *x,int *y)
{
    int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
}

int Linearsearch(int key)
{
    for(int i=0;i<length;i++)
    {
        if(key==A[i])
        {
            swap(&A[i],&A[0]);
            return i;
        }
    }
}
int Binarysearch(int key)
{
    int l,mid,h;
    l=0;
    h=length-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            return mid;
        }
        else if(key<A[mid])
            h=mid-1;
        else
            l=mid+1;
    }
}
int Get(int index) //get an element at index
{
    if(index>=0 && index<length)
    {
        return A[index];
    }
    return -1;
}
void Modify(int index,int x) //modify an element at index
{
    if(index>=0 && index<length)
    {
        A[index]=x;
    }

}
int Max()
{
    int max=A[0];
    int i;
    for(i=1;i<length;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    return max;
}
int Min()
{
    int min=A[0];
    for(int i=1;i<length;i++)
    {
        if(A[i]<min)
        {
            min=A[i];
        }
        return min;
    }
}
int Sum()//sum of all elements
{
    int s=0;
    for(int i=0;i<length;i++)
    {
        s=s+A[i];
    }
    return s;
}
float Average()
{
    return (float)Sum()/length;
}
void Reverse()
{
    int B[length];
    int i,j;
    for(i=length-1,j=0;i>=0;i--,j++)
    {
        B[j]=A[i];
    }
    for(i=0;i<length;i++)
    {
        A[i]=B[i];
    }
}
void Reverse2()
{
    int i,j;
    for(i=0,j=length-1;i<j;i++,j--)
    {
        swap(&A[i],&A[j]);
    }
}
int isSorted()
{
    int i;
    for(i=0;i<length-1;i++)
    {
        if(A[i]>A[i+1])
        return 0;
    }
    return 1;
}
//void Display()
//{
//    for(int i=0;i<size;i++)
//    {
//        printf("%d ",A[i]);
//    }
//}
//void Append(int num)
//{
//    if(length<size)
//    {
//    A[length]=num;
//    length++;
//    }
//}
//void Insert(int index,int num)
//{
//    if(index>=0 && index<=length)
//    {
//     for(int i=length;i>index;i--)
//        A[i]=A[i-1];
//    A[index]=num;
//    length++;
//    }
//}
//int Delete(int index)
//{   int x=0;
//    if(index>=0 && index<length)
//    {
//    x=A[index];
//     for(int i=index;i<=length-1;i++)
//        A[i]=A[i+1];
//    length--;
//    return x;
//    }
//    return 0;
//}
int main()
{ int num,index;
    while(1)
    {
        int ch;
        printf("\n 1.Append 2.Insert 3.Delete 4.Reverse 5.Display 6.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nEnter number to append : ");
            scanf("%d",&num);
            Append(num);
            break;
        case 2:
            printf("\nEnter index and number to insert : ");
            scanf("%d %d",&index,&num);
            Insert(index,num);
            break;
        case 3:
            printf("\nEnter index at which element to be deleted :");
            scanf("%d",&index);
            Delete(index);
            break;
        case 4:
            Reverse();
            break;
        case 5:
            Display();
            break;
        case 6:
            exit(0);
        default:
            printf("\nInvalid option");
        }
    }
    return 0;
}
