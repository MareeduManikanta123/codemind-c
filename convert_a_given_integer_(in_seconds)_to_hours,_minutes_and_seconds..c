#include<stdio.h>
int main()
{
    int n,hrs,mins,secs;
    scanf("%d",&n);
    hrs=n/3600;
    mins=(n-(3600*hrs))/60;
    secs=(n-(3600*hrs)-(mins*60));
    printf("H:M:S-%d:%d:%d",hrs,mins,secs);
}