#include<stdio.h>
int main(){
    int num=0,rev=0,digit=0,org=0;
    printf("enter numbers:");
    scanf("%d",&num);
    org=num;
    while(num!=0){
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    if(org==rev){
        printf("number is palindrome");
    }
    else{
        printf("number is not palindrome");
    }
    return 0;
}