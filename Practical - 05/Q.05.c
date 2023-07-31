#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,digit,reverse;

    printf("Enter a number: ");
    scanf("%d",&no);

    do
    {
        digit=no%10;
        reverse=digit;
        printf("%d",reverse);
        no/=10;
    }
    while (no>0);

    return 0;
}
