#include<iostream>
using namespace std;
class animal

{
public:
    virtual void makesound()
    {
        cout<<"Animal making sound:"<<endl;
    }
};
class dog : public animal
{
    public:
    void makesound() override
    {
        cout<<"dog making sound";
    }
};
int main()
{
    animal *a1;
    dog d1;
    a1=&d1;
    a1->makesound();
}