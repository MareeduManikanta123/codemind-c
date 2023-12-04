#include<stdio.h>
int main()
{
    int num;
    scanf("%d ",&num);
    if(num%2!=0)
    printf("weird");
    else if(num%2==0 && 2<num&&num<5)
    printf("not weird");
    else if(num%2==0 && 6<num&&num<20)
    printf("weird");
    else
    printf("not weird");
}