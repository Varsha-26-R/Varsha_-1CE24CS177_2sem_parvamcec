#include<iostream>
using namespace std;
class bankaccount 
{
    public:
    string holder_name;
    int acc_no;
    bankaccount()
    {
        cout<<"constructor is called automatically"<<endl;
    }
};
int main()
{
    bankaccount b1;
    return 0;
}