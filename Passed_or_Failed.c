#include<stdio.h>
int main()
{
    int eng,mat,phy,che,cs;
    scanf("%d%d%d%d%d",&eng,&mat,&phy,&che,&cs);
    if(eng<34)
    printf("FAILED");
    else if(mat<34)
    printf("FAILED");
    else if(phy<34)
    printf("FAILED");
    else if(che<34)
    printf("FAILED");
    else if(cs<34)
    printf("FAILED");
    else
    printf("PASSED");
}