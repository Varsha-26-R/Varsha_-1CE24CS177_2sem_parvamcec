#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p1=&a;
    int **p2=&p1;
    int ***p3=&p2;
    cout<<"Value of a:"<<a<<endl;
    cout<<"Value of a:"<<*(&a)<<endl;
    cout<<"Value of a:"<<**p2<<endl;
    cout<<"Value of a:"<<*p1<<endl;
    cout<<"Value of a:"<<**&p1<<endl;
    cout<<"Value of a:"<<***(&p2)<<endl;
    cout<<"Value of a:"<<*(&(**p2))<<endl;
}