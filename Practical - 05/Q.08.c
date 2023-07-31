#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,no,no1,counter=0,ans=0,modulus,power=1;

    printf("Enter a number: ");
    scanf("%d",&no);

    no1=no;

    while (no1!=0)
    {
        no1/=10;
        ++counter;
    }
        no1=no;
    while (no1!=0)
    {
        modulus=no1%10;

    for (i=0;i<=counter;++i)
    {
        power+=modulus;
    }
        ans+=power;
        no1/=10;
    }

    if (ans==no)
        printf("%d is an Armstrong Number",no);


    else
        printf("%d is not an Armstrong Number",no);

    return 0;
}
