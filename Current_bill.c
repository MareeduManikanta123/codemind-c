#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<200)
    {
        printf("%.2f",n*1.2+100);
        
    }
    else if(n<400)
    {
        printf("%.2f",n*1.5+100);
    }
    else if(n<600)
    {
        printf("%.2f",n*1.8+(n*1.8*15)/100.0);
    }
    else if(n>=600)
    {
        printf("%.2f",n*2.0+(n*2.0*15)/100.0);
    }
}