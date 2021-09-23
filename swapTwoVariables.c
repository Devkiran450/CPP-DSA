#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    printf("\nThe 1st num=%d and the 2nd num=%d before swapping.",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nThe 1st num=%d and the 2nd num=%d after swapping.",a,b);
    return 0;
}