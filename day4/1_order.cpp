#include<iostream>
using namespace std;
class student
{
    
private:
    string name;
public:
    student(string name)
    {
        this->name=name;
        cout<<"consructor called for:"<<this->name<<endl;
    }
    ~student()
    {
        cout<<"destructor called for:"<<name<<endl;
    }
};
int main()
{
    student s1("varsha");
    student s2("chandhana");
    student s3("nadiya");
    return 0;
}
