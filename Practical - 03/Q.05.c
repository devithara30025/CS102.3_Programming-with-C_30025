#include <stdio.h>

int main()
{
    int no1,no2;

    printf("Enter the first number ");
    scanf("%d",&no1);
    printf("Enter the second number ");
    scanf("%d",&no2);

    if(no2!=0 && no1 % no2==0)
        printf("\n\n%d is a multiple of %d\n",no1,no2);
    else
        printf("\n\n%d is not a multiple of %d",no1,no2);

    return 0;
}
