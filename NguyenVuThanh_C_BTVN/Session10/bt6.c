#include <stdio.h>

int main()
{
    int i, j;
    int numbers[] = {5, 1, 4, 2, 8};
    int size = sizeof(numbers) / sizeof(int);
    printf("Mang: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    printf("\nMang sau khi sap xep theo thu tu tang dan: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}