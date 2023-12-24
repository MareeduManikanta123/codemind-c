#include<stdio.h>
int main()
{
    int n,i,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(d=1;d<=i;d++)
        {
            printf("*");
        }
        printf("
");
    }
}