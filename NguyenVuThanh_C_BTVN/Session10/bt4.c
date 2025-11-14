#include <stdio.h>

int main()
{
    int number[] = {64, 25, 12, 22, 11};
    int size = sizeof(number) / sizeof(int);
    int i, j;
    int temp;
    printf("Mang: ");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (number[j] > number[j + 1])
            {
                temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }
    printf("Mang sap xep sau khi thu tu tang dan: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", number[i]);
    }
    return 0;
}