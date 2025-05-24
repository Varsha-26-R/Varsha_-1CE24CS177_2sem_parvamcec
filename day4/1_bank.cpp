#include<iostream>
using namespace std;
class emplyoee
{
private:
    string name;
public:
    emplyoee(string name)
    {
        this->name=name;
        cout<<"consructor called for:"<<this->name<<endl;
    }
    ~emplyoee()
    {
        cout<<"destructor called for:"<<name<<endl;
    }
};
int main()
{
    emplyoee e1("varsha");
    emplyoee e2("chandhana");
    emplyoee e3("nadiya");
    return 0;
}
