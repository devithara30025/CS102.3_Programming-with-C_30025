#include <stdio.h>
#include <stdlib.h>

int main()
{    int no,total=0;

    printf("Enter the numbers(Enter -1 to stop): \n");

    while (1)
    {
    scanf("%d",&no);
    if (no==-1)
        {
            break;
        }
        total=total+no;
    }
    printf("\nTotal is: %d",total);


    return 0;

}
