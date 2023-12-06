#include<stdio.h>
int main()

{
    int n,m,k,i,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&m,&k);
        if(m-k>=a)
        {
            printf("YES
");
            
        }
        else
        {
            printf("NO
");
        }
    }
}