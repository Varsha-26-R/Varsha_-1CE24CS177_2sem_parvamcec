#include<iostream>
using namespace std;
class bank
{
    private:
    string holder_name;
    int acc_no;
    public:
    string getHolder_name()
    {
        return this->holder_name;
    }
    int getAccno()
    {
        return this->acc_no;
    }
    void setHolder_name(string name)
    {
        this->holder_name=name;
    }
    void setAccno(int acc_no)
    {
        this->acc_no=acc_no;
    }
} ;
int main()
{
    bank s1;
    s1.setHolder_name("pavan");
    s1.setAccno(120);
    cout<<" Bank account Holder name is :"<<s1.getHolder_name()<<endl;
    cout<<"Account number is :"<<s1.getAccno()<<endl;
    return 0;


 
}