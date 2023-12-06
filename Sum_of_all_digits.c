#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        c=b%10;
        b=b/10;
        d=d+c;
    }
    
   printf("%d",d);
    

}