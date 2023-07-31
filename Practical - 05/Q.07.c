#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1=0,no2=1,no3,i;

    printf("Fibonacci Sequence: ");

    for (i=1;i<=10;i++)
    {
        printf("\t%d",no1);
        no3=no1+no2;
        no1=no2;
        no2=no3;
    }

    return 0;
}


