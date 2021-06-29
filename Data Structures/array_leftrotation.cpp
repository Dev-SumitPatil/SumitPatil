#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
   int n=10;
   int d=2;
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        a[i]=a[i+2];
    }
    for(int j=0, i=n-d;i<n;i++,j++)
    {
        a[i]=temp[j];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

}
