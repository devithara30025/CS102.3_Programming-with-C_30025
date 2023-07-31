#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,no,fact=1;

    printf("Enter a number: ");
    scanf("%d",&no);

    while (i<=no)
    {
        fact=fact*i;
        i++;
    }
    printf("\n\n");
    printf("Factorial of %d is: %d",no,fact);

    return 0;
}

