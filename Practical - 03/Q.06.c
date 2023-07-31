#include <stdio.h>

int main()
{
    printf("A = %d\n", 'A');
    printf("B = %d\n", 'B');
    printf("C = %d\n", 'C');
    printf("a = %d\n", 'a');
    printf("b = %d\n", 'b');
    printf("c = %d\n", 'c');
    printf("0 = %d\n", '0');
    printf("1 = %d\n", '1');
    printf("2 = %d\n", '2');
    printf("$ = %d\n", '$');
    printf("* = %d\n", '*');
    printf("+ = %d\n", '+');
    printf("/ = %d\n", '/');
    printf("Blank character - %d\n", ' ');

    char c;
    printf("\n\nEnter a character: \n");
    scanf("%c",&c);
    printf("The ASCII values of %c is: %d",c,c);

    return 0;
}
