#include <stdio.h>
int main()
{
    int no1,no2,no3,max,min;

    printf("Enter First Number ");
    scanf("%d",&no1);
    printf("Enter Second Number ");
    scanf("%d",&no2);
    printf("Enter Third Number ");
    scanf("%d",&no3);

    max=no1;
    if (no2>max)
        max=no2;


    if (no3>max)
            max=no3;

    min=no1;
    if (no2<min)
        min=no2;
    if (no3<min)
        min=no3;

    printf("\n\nHighest number is %d\n",max);
    printf("\n\nLowest Number is %d",min);

}

