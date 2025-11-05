#include <stdio.h>

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int left, right, mid;
    int searchValue;
    printf("Gia tri can tim la: ");
    scanf("%d", &searchValue);
    left = 0;
    right = sizeof(numbers) / sizeof(int);
    do
    {
        mid = left + (right - left) / 2;
        if (searchValue > numbers[mid])
        {
            left = mid + 1;
        }
        if (searchValue < numbers[mid])
        {
            right = mid - 1;
        }
    } while (searchValue != numbers[mid] && left != right);
    if (numbers[mid] == searchValue)
    {
        printf("Phan tu co chi so la: %d", mid);
    }
    else
    {
        printf("Khong tim thay!!!");
    }
    return 0;
}