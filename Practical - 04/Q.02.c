#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float no1,no2,add,sub,mult,div;

    printf("Enter the first number ");
    scanf("%f",&no1);
    printf("Enter the second number ");
    scanf("%f",&no2);

    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("Select the operator: ");
    scanf("%d",&choice);

    add=no1+no2;
    sub=no1-no2;
    mult=no1*no2;
    div=no1/no2;

    switch (choice)

    {
    case 1:printf("Answer is: %.2f",add);break;
    case 2:printf("Answer is: %.2f",sub);break;
    case 3:printf("Answer is: %.2f",mult);break;
    case 4:printf("Answer is: %.2f",div);break;
    }


    return 0;
}
