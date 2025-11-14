#include <stdio.h>
int main()
{
    int i, j;
    int arr[] = {1, 2, 33, 2, 4, 1, 5, 3, 6};
    int oldN = sizeof(arr) / sizeof(arr[0]);

    int result[100];
    int newN = 0;

    for (i = 0; i < oldN; i++)
    {
        int exists = 0;

        for (j = 0; j < newN; j++)
        {
            if (arr[i] == result[j])
            {
                exists = 1;
                break;
            }
        }

        if (!exists)
        {
            result[newN] = arr[i];
            newN++;
        }
    }
    printf("Mang sau khi loai bo trung lap:\n");
    for (i = 0; i < newN; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}