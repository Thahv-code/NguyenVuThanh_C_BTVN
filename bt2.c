#include <stdio.h>
#include <string.h>

int main()
{

    char myString[] = "Hello";

    int length = strlen(myString);

    for (int i = 0; i < length; i++)
    {
        printf("%c ", myString[i]);
    }
    printf("\n");

    return 0;
}