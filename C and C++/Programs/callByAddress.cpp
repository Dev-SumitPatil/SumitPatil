#include<iostream>
using namespace std;
void swap_num(int *,int *);
void swap_num(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
int main()
{
    int a{9},b{10};
    cout<<"a :"<<a<<"\tb :"<<b<<endl;
    swap_num(&a,&b);//call by address
    cout<<"a :"<<a<<"\tb :"<<b<<endl;
}
