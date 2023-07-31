#include <stdio.h>
#include <stdlib.h>

int main()
{
    float avg,distance,time;

    printf("Enter Distance");
    scanf("%f",&distance);
    printf("Enter Time Taken");
    scanf("%f",&time);

    avg=distance/time;

    printf("Average speed is %.2f ms-1",avg);

    return 0;

}
