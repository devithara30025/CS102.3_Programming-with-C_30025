#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price[10],avg=0.0,total=0.0;
    int i,no=0;

    for (i=0;i<10;i++)
    {
        printf("Enter the price of %d product: ",i+1);
        scanf("%d",&price[i]);
    }

    for (i=0;i<10;i++)
    {
        total=total+price[i];
        if (price[i]>200)
        {
            no++;
        }
    }

    avg=total/10.0;
    printf("\n\n");
    printf("Average value of a product: %.2f\n",avg);
    printf("Number of products of which price is greater than 200: %d",no);

    return 0;

}
