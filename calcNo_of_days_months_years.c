#include<stdio.h>
int main()
{
    int n, y, m, d;
    printf("Enter number of days: ");
    scanf("%d", &n);
    y=n/365;
    m=(n-y*365)/30;
    d=(n-y*365-m*30);
    printf("Years = %d",y);
    printf("\nMonths = %d",m);
    printf("\nDays = %d",d);
    return 0;
}