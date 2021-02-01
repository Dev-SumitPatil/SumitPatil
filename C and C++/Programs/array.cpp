#include<stdio.h>
#include<iostream>
using namespace std;
void printArray(int *ptr,int size)
{   cout<<"Array is :"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<*(ptr+i)<<endl;  //or arr[i]
    }
}
void modifyArray(int *ptr,int index)
{       int a;
        printf("Enter array element to modify\n");
        cin>>a;
        ptr[index]=a;
}
int *makeArray(int size)
{
    int *p;
    p=new int[size]; //c style: p=(int*)malloc(n*sizeof(size));
    for(int i=0;i<size;i++)
        p[i]=i+2;
    return p;
}
int main()
{
    int arr[]{1,2,3,4,5};
    int *a;
//    for(auto x:arr)   //for each loop
//    {
//        cout<<x<<endl;
//    }
    printArray(arr,5);
    modifyArray(arr,4);
    printArray(arr,5);
    a=makeArray(5);//pointer that returns an array
    printArray(a,5);
}

