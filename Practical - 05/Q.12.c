#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,factors,total=0;

    printf("Enter the numbers(Enter -1 to stop): \n");
    scanf("%d",&no);

    while (1)
    {
        if (no==-1)
        {
            break;
        }
        total=total+no;
    }
    printf("\nTotal is: %d",total);


    return 0;
}
