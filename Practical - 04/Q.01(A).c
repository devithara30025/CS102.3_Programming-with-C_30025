#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,modulus,even,odd;

    printf("Enter a number ");
    scanf("%d",&number);

    modulus=number%2;

    if (modulus==0)
        printf("\n\nNumber is an even number",even);
    else
        printf("\n\nNumber is an odd number",odd);


    return 0;
}
