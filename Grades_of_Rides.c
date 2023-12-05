#include<stdio.h>
int main()
{
    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>50 && num2>60 && num3>100)
    printf("10");
    else if(num1>50 && num2>60)
    printf("9");
    else if(num2>60 && num3>100)
    printf("8");
    else if(num3>100 && num1>50)
    printf("7");
    else if(num1>50 || num2>60 || num3>100)
    printf("6");
    else
    printf("5");
}