#include<iostream>
using namespace std;
class bus
{
    public:
    string route ;
    int capacity;
    bus(string route,int capacity)
    {
        cout<<"constructor is called automatically"<<endl;
        this->route=route;
        this->capacity=capacity;

    }
    void display()
    {
        cout<<"route of the bus:"<<this->route=route << endl;
        cout<<"capacity of bus:"<<this->capacity=capacity <<endl;
    }
};
int main()
{
    bus b1("kanakapura",80);
    b1.display();
    return 0;
}