#include <stdio.h>

int main()
{
    int sales,service;
    char city[10];
    float basic,additional_allowances,bonus,gross_remuneration;

    printf("Enter the basic salary ");
    scanf("%f",&basic);
    printf("Enter service period ");
    scanf("%d",&service);
    printf("Enter monthly sales ");
    scanf("%d",&sales);
    printf("Enter the city ");
    scanf("%s",&city);

    if (service>5)
        additional_allowances=0.1*basic;
    else
        additional_allowances=0;

    if (city=='colombo')
    {
        additional_allowances+=2500;

    }

    if (sales<=25000)
        bonus=0.1*sales;
        else if (sales<=50000)
            bonus=0.12*sales;
        else
            bonus=0.15*sales;

    gross_remuneration=basic+additional_allowances+bonus;

    printf("\n\nGross monthly remuneration: %.2f\n",gross_remuneration);



}
