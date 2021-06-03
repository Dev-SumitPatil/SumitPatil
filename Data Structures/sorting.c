#include<stdio.h>
#include<stdlib.h>
void
void BubbleSort(int A[],int n)
{
    int i,j,flag=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
            }
            flag=1;
        }
    }
}
