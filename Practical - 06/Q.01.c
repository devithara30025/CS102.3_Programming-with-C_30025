#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[9],i,min,max,tot,reverse_arr[10];
    float avg;

    for (i=0;i<10;i++)
    {
        printf("Enter a value to the element %d ",i+1);
        scanf("%d",&arr[i]);
    }
        min=arr[0];
        for(i=1;i<10;i++)
        {
            if (arr[i]<min)
            {
                min=arr[i];
            }
        }
        max=arr[0];
        for(i=1;i<10;i++)
        {
            if (arr[i]>max)
            {
                max=arr[i];
            }
        }
        tot=0;
        for(i=0;i<10;i++)
        {
            tot+=arr[i];
        }

        avg=(float)tot/10;

        reverse_arr[10];
        for(i=0;i<10;i++)
        {
            reverse_arr[i]=arr[9-i];
        }

        printf("\nArray values: ");
        for(i=0;i<10;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
        printf("Minimum value: %d\n",min);
        printf("Maximum value: %d\n",max);
        printf("Average value: %.2f\n",avg);

        printf("Reverse Order: ");
        for(i=0;i<10;i++)
        {
            printf("%d ",reverse_arr[i]);
        }
        printf("\n");
}

