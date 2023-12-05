#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num%3==0 && num%5==0)
    printf("PlingPlang");
    else if(num%5==0 && num%7==0)
    printf("PlangPlong");
    else if(num%7==0 && num%3==0)
    printf("PlongPling");
    else if(num%3==0)
    printf("Pling");
    else if(num%5==0)
    printf("Plang");
    else if(num%7==0)
    printf("Plong");
    else
    printf("%d",num);
}