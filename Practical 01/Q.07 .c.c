#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2,temp;

    printf("Enter First Number");
    scanf("%d",&no1);
    printf("Enter Second Number");
    scanf("%d",&no2);

    printf("\n\nBefore Swap\n");
    printf("First Number: %d\nSecond Number: %d",no1,no2);

    temp=no1;
    no1=no2;
    no2=temp;

    printf("\n\nAfter Swap\n");
    printf("First Number: %d\nSecond Number: %d",no1,no2);

    return 0;
}
