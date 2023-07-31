#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,modulus;

    printf("Enter a Number: ");
    scanf("%d",&number);

    modulus=number%2;

    switch (modulus)
    {

    case 0:printf("Number is an even number");break;
    case 1:printf("Number is an odd number");break;

    }

    return 0;
}
