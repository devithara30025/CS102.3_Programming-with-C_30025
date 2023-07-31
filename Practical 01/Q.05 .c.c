#include <stdio.h>
#include <stdlib.h>

int main()
{
    float no1,no2,avg;

    printf("Enter First Number");
    scanf("%f",&no1);
    printf("Enter Second Number");
    scanf("%f",&no2);

    avg=((no1+no2)/2);

    printf("Average of the two numbers is %.2f",avg);

    return 0;

}
