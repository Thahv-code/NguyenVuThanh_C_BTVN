#include <stdio.h>

int main()
{
    int number[] = {2, 4, 6, 8, 10, 3, 5};
    int size = sizeof(number) / sizeof(int);
    int i;
    printf("Mang: ");
    for (i = 0; i < size; i++)
    {
        printf("\t%d", number[i]);
    }
    int x = 6;
    int foundIndex = -1;
    for (i = 0; i < size; i++)
    {
        if (number[i] == x)
        {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex != -1)
    {
        printf("\nTim thay %d tai chi so %d", x, foundIndex);
    }
    else
    {
        printf("\nKhong tim thay");
    }

    return 0;
}