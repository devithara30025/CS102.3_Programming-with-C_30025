#include <stdio.h>

int main()
{
    float r,d,c,a,p;

    printf("Enter the radius value ");
    scanf("%f",&r);

    p=3.14159;

    printf("\n\nDiameter is %.2f\n",2*r);
    printf("Circumference is %.2f\n",2*p*r);
    printf("Area is %.2f", p*(r*r));
}
