#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a+b>c+d)
    {
    e=c+d;
    printf("%d",e);
    }
    else
    {
       f=a+b;
        printf("%d",f);
    }
}