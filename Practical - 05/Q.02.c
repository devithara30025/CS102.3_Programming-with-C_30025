#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,marks[10],total=0;
    float avg;

    for (i=0;i<10;i++)
    {
        printf("Enter %d mark: ",i+1);
        scanf("%d",&marks[i]);
        total=total+marks[i];
    }
    avg=(float)total/10;

    printf("\n\nTotal Marks: %d",total);
    printf("\nAverage: %.2f\n\n",avg);

    if (avg<50)
        printf("Status: Fail\n\n");
    else
        printf("Status: Pass\n\n");

    return 0;
}



