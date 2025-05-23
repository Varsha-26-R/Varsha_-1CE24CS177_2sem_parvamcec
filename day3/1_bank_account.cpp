#include<iostream>
using namespace std;
class bankaccount 
{
    public:
    string holder_name;
    int acc_no;
};
int main()
{
    bankaccount b1;
    b1.holder_name="pavan";
    b1.acc_no=101;
    cout<<"name"<<b1.holder_name<<endl;
    cout<<"Account number"<<b1.acc_no<<endl;

    return 0;
}