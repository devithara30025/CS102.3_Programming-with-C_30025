#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;

    printf("ASCII Values: ");

    for (letter='A';letter<='Z';letter++)
    {
        printf("%c: %d  \n",letter,letter);
    }
    return 0;
}
