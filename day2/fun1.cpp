#include<iostream>
using namespace std;
int add(int num1,int num2);
int main()
{
    int a=0;
    int b=0;
    cout<<"enter value for a and b:"<<endl;
    cin>>a>>b;
    int res=add(a,b);
    cout<<"the result1 is:"<<res<<endl;
    int c=0;
    int d=0;
    cout<<"enter value for c and d:"<<endl;
    cin>>c>>d;
    int res1=add(c,d);
    cout<<"the result2 is:"<<res1<<endl;
}
int add(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}