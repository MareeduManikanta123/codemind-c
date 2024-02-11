#include<stdio.h>
int main()
{
    int a,num,rem,rev=0;
    scanf("%d",&num);
    a=num;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        rev=rev*10+rem;
    }
    if(a==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
        
    }
}