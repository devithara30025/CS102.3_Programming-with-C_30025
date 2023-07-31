#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,base,exponent,power=1;

    printf("Enter a base value ");
    scanf("%d",&base);
    printf("Enter an exponent ");
    scanf("%d",&exponent);

    do
    {
        power=power*base;
        i++;
    } while (i<=exponent);

    printf("The %d power of %d: %d",exponent,base,power);

    return 0;
}
