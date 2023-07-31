#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1;
    float no2;
    double no3;
    char character[1];

    printf("Enter First Number");
    scanf("%d",&no1);
    printf("Enter Second Number");
    scanf("%f",&no2);
    printf("Enter Third Number");
    scanf("%lf",&no3);
    printf("Enter Character");
    scanf("%s",&character);

    printf("\n\nInteger Value: %d\n",no1);
    printf("Float Value: %.2f\n",no2);
    printf("Double Value: %.2lf\n",no3);
    printf("Character: %s\n",character);

    return 0;

}
