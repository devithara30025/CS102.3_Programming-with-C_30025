#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,arr[10],positive=0,negative=0,zero=0;

    for (i=0;i<10;i++)

    {
    printf("Enter %d number: ",i+1);
    scanf("%d",&arr[i]);

    if (arr[i]<0)
        negative=negative+1;
    else if (arr[i]>0)
        positive=positive+1;
    else
        zero=zero+1;
    }

    printf("\n\n");
    printf("Number of positive figures: %d\n",positive);
    printf("Number of negative figures: %d\n",negative);
    printf("Number of zeros: %d",zero);

    return 0;
}
