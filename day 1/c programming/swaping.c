#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two number: \n");
    scanf("%d %d",&a,&b);
    printf("before swaping two numbers:%d %d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping two numbers:%d %d\n",a,b);
    return 0;
}