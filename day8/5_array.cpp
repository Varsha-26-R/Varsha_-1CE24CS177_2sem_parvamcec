#include<iostream>
using namespace std;
int main()
{
    int arr[4]={1,2,3,4};
    int *ptr=arr;
    int evencount=0,oddcount=0;
    for(int i=0;i<7;i++)
    {
        if ((i[ptr])%2==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    cout<<"Even count:"<<evencount<<endl;
    cout<<"odd count:"<<oddcount<<endl;
    
   
    return 0;
}