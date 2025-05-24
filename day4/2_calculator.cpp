#include<iostream>
using namespace std;
class calculator
{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    int sub(int a,int b)
    {
        return a-b;
    }
    float div(int a,int b)
    {
        if(b==0){
            cout<<"division by zero is nat allowed"<<endl;
        }
        return a/b;
    }
    int mul(int a,int b)
    {
        return a*b;
    }
};
int main()
{
    calculator calc;
    int choice, a ,b;
    while (true)
    {
        cout<<"\n1.add\n2.sub\n3.div\n4.mul\n5.exit\n";
        cout<<"enter your choice:"<<endl;
        cin>>choice;
        if (choice==6)
        {
            cout<<"exiting program"<<endl;
            break;
        }
        if(choice>=1 && choice<=5)
        {
            cout<<"enter two numbers:"<<endl;
            cin>>a>>b;
        }
        switch (choice)
        {
            case 1:
            cout<<"result:"<<calc.add(a,b)<<endl;
            break;
            case 2:
            cout<<"rseult"<<calc.sub(a,b)<<endl;
            break;
            case 3:
            cout<<"rseult"<<calc.mul(a,b)<<endl;
            break;
            case 4:
            cout<<"rseult"<<calc.div(a,b)<<endl;
            break;
            default:
            cout<<"exit";
        }

    }
    return 0;

}