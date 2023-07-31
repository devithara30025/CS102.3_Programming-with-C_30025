#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,marks[10],min,max,total=0;
    float avg;

    for (i=0;i<10;i++)
    {
        printf("Enter student %d marks: ",i+1);
        scanf("%d",marks[i]);

        total=total+marks[i];

        if (marks[i]>no)
            max=marks[i];
    }
    avg=total/10;
    printf("Total: %d",total);
    printf("Maximum marks: %d",max);
    printf("Average marks: %d",avg);
    return 0;
}
