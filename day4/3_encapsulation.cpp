#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int roll_no;
    public:
    string getName()
    {
        return this->name;
    }
    int getRollno()
    {
        return this->roll_no;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setRollno(int roll)
    {
        this->roll_no=roll;
    }
} ;
int main()
{
    student s1;
    s1.setName("pavan");
    s1.setRollno(120);
    cout<<"name is :"<<s1.getName()<<endl;
    cout<<"roll number :"<<s1.getRollno()<<endl;
    return 0;


 
}