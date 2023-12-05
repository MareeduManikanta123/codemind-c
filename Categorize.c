#include<stdio.h>
int main()
{
    float num;
    scanf("%f",&num);
    if(num<=150)
    printf("The person is Dwarf.");
    else if(num>150 && num<=165)
    printf("The person is average heighted.");
    else if(num>165 && num<=195)
    printf("The person is taller.");
    else
    printf("Abnormal height.");
}