#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter two number: \n");
    scanf("%d %d",&a,&b);
    printf("before swaping two numbers:%d %d \n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping two numbers:%d %d\n",a,b);
    return 0;
}