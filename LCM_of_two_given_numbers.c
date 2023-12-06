#include<stdio.h>
int main()
{
    int x,y,a=0,i;
    scanf("%d%d",&x,&y);
    for(i=1;i<=x*y;i++)
    {
        if(i%x==0 && i%y==0)
        {
            printf("%d",i);
            a++;
            break;
        }
    }
    if(a==0)
    {
        printf("%d",x*y);
    }
}