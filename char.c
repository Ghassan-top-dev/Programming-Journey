#include <stdio.h>
#include <ctype.h>

int main()
{
    char input;

    printf("Enter a character: ");
    scanf("%c",&input);

    if (isdigit(input) == 0)
         printf("%c is not a digit.",input);
    else
         printf("%c is a digit.",input);
    return 0;
}
