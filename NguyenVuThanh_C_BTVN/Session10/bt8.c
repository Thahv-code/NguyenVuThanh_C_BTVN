#include <stdio.h>

int main()
{
    int i, j;
    int numbers[] = {5, 1, 8, 3, 2, 7};
    int size = sizeof(numbers) / sizeof(int);
    printf("Mang :");
    for (i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    int temp;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    printf("\nMang sau khi sap xep la: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    int left, right, mid;
    int searchValue;
    printf("\nNhap so can tim: ");
    scanf("%d", &searchValue);
    left = 0;
    right = sizeof(numbers) / sizeof(int);
    int found = 0;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (searchValue == numbers[mid])
        {
            found = 1;
            break;
        }
        else if (searchValue > numbers[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if (found)
    {
        printf("Chi so phan tu can tim la: %d", mid);
    }
    else
    {
        printf("Khong tim thay");
    }
    return 0;
}