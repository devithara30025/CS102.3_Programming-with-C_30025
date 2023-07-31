#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,arr[10];

    for (i=0;i<10;i++)

    {

    printf("Enter %d number: ",i+1);
    scanf("%d",&arr[i]);

    }
    printf("\n\n");

    for (i=0;i<10;i++)
    {
        printf("%d number: %d\n",i+1,arr[i]);
    }
    return 0;
}
