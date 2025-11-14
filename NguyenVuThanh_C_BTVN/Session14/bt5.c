#include <stdio.h>

void printArray(int arr[], int size);

int main(void)
{
    int numbers[] = {1, 5, 3, 7, 9, 0, 4, 3, 2};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    printf("Mang co %d phan tu", length);
    printArray(numbers, length);

    return 0;
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("\nArray [%d] = %d", i, arr[i]);
    }
}