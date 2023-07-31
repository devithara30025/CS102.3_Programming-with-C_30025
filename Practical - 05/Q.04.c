#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,digit,sum=0;

    printf("Enter a number ");
    scanf("%d",&no);

    while (no>0)
    {
        digit=no%10;
        sum+=digit;
        no=no/10;
    }
    printf("\n\nSum of the digits in the number: %d\n\n",sum);
    return 0;
}
