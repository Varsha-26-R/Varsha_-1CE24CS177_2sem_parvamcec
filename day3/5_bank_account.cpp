#include<iostream>
using namespace std;
class bankaccount 
{
    public:
    string holder_name;
    int acc_no;
    bankaccount(string name,int acc_no)
    {
        cout<<"constructor is called automatically"<<endl;
        this->holder_name="unknown";
        this->acc_no=0;

    }
     bankaccount(bankaccount &b1)
    {
        this->holder_name=b1.holder_name;
        this->acc_no=b1.acc_no;

    }
    void display()
    {
        cout<<"holder name:"<<this->holder_name<<endl;
        cout<<"Account number:"<<acc_no<<endl;
    }
};
int main()
{   
    bankaccount b1("mohan",101);
    b1.display();
    bankaccount b2=b1;
    b2.display();
    return 0;
}