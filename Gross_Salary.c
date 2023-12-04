#include<stdio.h>
int main()
{
    int bs;
    float da,hra,gs;
    scanf("%d ",&bs);
    if(bs<=10000)
{
    da=80*bs/100.0;
    hra=20*bs/100.0;
    gs=da+hra+bs;
    printf("%.2f ",gs);
}
else if(bs<=20000)
{
    da=90*bs/100.0;
    hra=25*bs/100.0;
    gs=bs+da+hra;
    printf("%.2f ",gs);
    
}
else
{
    da=95*bs/100.0;
    hra=30*bs/100.0;
    gs=da+hra+bs;
    printf("%.2f ",gs);
}
}