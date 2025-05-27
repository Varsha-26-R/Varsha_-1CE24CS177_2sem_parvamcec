#include<iostream>
using namespace std;
class person
{
protected:
    string name;
    int age;
    int weight;
public:
    person(string name,int age,int weight ):name(name),age(age),weight(weight)
    {
        cout<<"person constructor"<<endl;
    }
    
};
class employee:public person
{
protected:
    int emp_id;
public:
    employee(string name,int age,int weight,int emp_id):person(name,age,weight),emp_id(emp_id)
    {
        cout<<"employee consturctor"<<endl;
    }
};
class manager:public employee
{
    int salary;
public:
    manager(string name,int age,int weight,int emp_id,int salary):employee(name,age,weight,emp_id),salary(salary)
    {
        cout<<"manager constructor"<<endl;
    }

    void display()
    {
        cout<<"manager details"<<endl;
        cout<<"manager name:"<<name<<endl;
        cout<<"manager age:"<<age<<endl;
        cout<<"manager weight:"<<weight<<endl;
        cout<<"Employee id:"<<emp_id<<endl;
        cout<<"Manager salary:"<<salary<<endl;
    }
};
int main()
{
    manager m1("pavan",23,50,102,20000);
    m1.display();
};