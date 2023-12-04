#include<stdio.h>
int main()
{
    int phy,che,bio,mat,cs;
    scanf("%d%d%d%d%d",&phy,&che,&bio,&mat,&cs);
    float avg;
    avg=(phy+che+bio+mat+cs)/5.0;
    if(avg>=90)
    printf("Grade A");
    else if(avg>=80)
    printf("Grade B");
    else if(avg>=70)
    printf("Grade C");
    else if(avg>=60)
    printf("Grade D");
    else if(avg>=40)
    printf("Grade E");
    else
    printf("Grade F");
}