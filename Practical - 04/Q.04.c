#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;

    printf("Enter a character: ");
    scanf("%c",&letter);

    switch(letter)
    {
        case'a':printf("\n\nVowel");break;
        case'e':printf("\n\nVowel");break;
        case'i':printf("\n\nVowel");break;
        case'o':printf("\n\nVowel");break;
        case'u':printf("\n\nVowel");break;

        default:printf("%c is not a vowel",letter);
    }
    return 0;
}
