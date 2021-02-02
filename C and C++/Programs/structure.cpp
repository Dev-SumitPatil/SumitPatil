#include<iostream>
#include<string>
using namespace std;
struct Employee
{
    int empNo;
    string name;
    int age;
    void printStruct(Employee *);
};
void Employee::printStruct(Employee *p)
{
    cout<<"Employee No. :"<<p->empNo<<endl;
    cout<<"Employee Name. :"<<p->name<<endl;
    cout<<"Employee Age :"<<p->age<<endl;
}
int main()
{
    Employee *p;
    p=new Employee;
    p->age=30;
    p->name="Sumit";
    p->empNo=1;
    p->printStruct(p);
}
