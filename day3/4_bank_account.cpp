#include<iostream>
using namespace std;
class bankaccount 
{
    public:
    string holder_name;
    int acc_no;
    bankaccount()
    {
        cout<<"default constructor"<<endl;
        this->holder_name="unknown";
        this->acc_no=0;

    }
     bankaccount(string name,int acc_no)
    {
        cout<<"constructor is called automatically"<<endl;
        this->holder_name=name;
        this->acc_no=acc_no;

    }
    void display()
    {
        cout<<"holder name:"<<this->holder_name<<endl;
        cout<<"Account number:"<<acc_no<<endl;
    }
};
int main()
{
    bankaccount b1;
    bankaccount b2("mohan",102);
    b1.display();
    b2.display();
    return 0;
}