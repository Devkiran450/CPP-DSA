#include <stdio.h>
 
void main()
{
    int i, beg, sum = 0,end;
 
    printf("Enter the value of beginning range:\n");
    scanf("%d", &beg);
    printf("Enter the value of ending range:\n");
    scanf("%d", &end);
    for (i = beg; i <= end; i++)
    {
        if (i % 2 != 0)
        { 
            printf("%d ",i);
            sum += i;
        }
        
    }
    printf("\nSum of all odd numbers  = %d\n", sum);
}