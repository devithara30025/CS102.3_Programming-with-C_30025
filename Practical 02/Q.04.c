#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,f;

    printf("Enter Fahrenheit value");
    scanf("%f",&f);

    c=(5.0/9.0)*(f-32.0);

    printf("Value in Celsius %.2f",c);

    return 0;

}
