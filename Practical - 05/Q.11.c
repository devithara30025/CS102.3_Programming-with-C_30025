#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,no,prime=1;

    printf("Enter a number ");
    scanf("%d",&no);

    if (no==0||no==1)
    {
        prime=0;
    }
    else
    {
        for(i=2;i<=no/2;++i)
    {
        if (no%i==0)
    {
        prime=0;break;
    }
    }
    }
    if (prime)
    {
        printf("%d is a prime number",no);
    }
    else
    {
        printf("%d is not a prime number",no);
    }

    return 0;
}
