#include <stdio.h>

int main()
{
    int i;
    int numbers[] = {1, 2, 3, 4, 2, 2};
    int size = sizeof(numbers) / sizeof(int);
    printf("Mang :");
    for (i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    int value = 2;
    int x = 0;
    for (i = 0; i < size; i++)
    {
        if (numbers[i] == value)
        {
            x++;
        }
    }
    printf("\nSo can tim la so %d", value);
    printf("\nSo lan xuat hien la %d", x);

    return 0;
}