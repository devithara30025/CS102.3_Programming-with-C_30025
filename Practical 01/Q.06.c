#include <stdio.h>
#include <stdlib.h>

int main()
{
    int byear,age;
    char name[20];

    printf("Enter your name");
    scanf("%s",&name);
    printf("Enter your birth year");
    scanf("%d",&byear);

    age=(2023-byear);

    printf("\n\nHi %s\n",name);
    printf("You are %d",age);

    return 0;

}
