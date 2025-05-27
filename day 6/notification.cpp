#include<iostream>
using namespace std;
class message
{
public:
    void sendmessage(string email,string message)
    {
        cout<<"email sent successfully:"<<endl;
        cout<<"email:"<<email<<endl;
        cout<<"message:"<<message<<endl;
    }
    void sendmessage(long long ph,int otp)
    {
        cout<<"otp sent successfully:"<<endl;
        cout<<"phone number:"<<ph<<endl;
        cout<<"otp:"<<endl;
    }
};
int main()
{
    message m1;
    m1.sendmessage("some@gmail.com","hello world");
    m1.sendmessage(9886544353,348);
    
}