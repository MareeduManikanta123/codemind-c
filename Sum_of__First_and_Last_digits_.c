#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a%10;
    while(a!=0)
    {
        c=a%10;
        a=a/10;
        if(a==0)
        {
            d=c;
        }
    }
    printf("%d",d+b);
}