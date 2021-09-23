#include<stdio.h>
int main()
{
    int y,i;
    for(i=0;i<2;i++)
    {printf("\nEnter year %d:",i+1);
    scanf("%d",&y);
    if(y%100==0)
    {
        if(y%400==0)
        {
            printf("\n%d is a leap year.",y);
        }
        else
        {
            printf("\n%d is not a leap year.",y);
        }
    }
    else
    {
        if(y%4==0)
        {
            printf("\n%d is a leap year.",y);
        }
        else
        {
            printf("\n%d is not a leap year.",y);
        }
    }}
    return 0;
}