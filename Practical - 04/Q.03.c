#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float r,p=3.14159,circumference,area,volume;

    printf("1. Calculate circumference\n");
    printf("2. Calculate area\n");
    printf("3. Calculate volume\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("Enter radius: ");
    scanf("%f",&r);

    circumference=2*p*r;
    area=p*(r*r);
    volume=1.33*p*(r*r*r);

    switch (choice)
    {
        case 1:printf("Circumference is: %.2f",circumference);break;
        case 2:printf("Area is: %.2f",area);break;
        case 3:printf("Volume is: %.2f",volume);break;
    }

    return 0;
}
