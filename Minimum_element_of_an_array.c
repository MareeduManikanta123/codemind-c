#include<stdio.h>
int main()
{
    int n,i,c=10;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(c>arr[i])
        {
            c=arr[i];
        }
    }
    printf("%d",c);
}