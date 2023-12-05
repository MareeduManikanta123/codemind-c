#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num<3)
    printf("LIGHT");
    else if(num>=3 && num<7)
    printf("MODERATE");
    else
    printf("HEAVY");
}