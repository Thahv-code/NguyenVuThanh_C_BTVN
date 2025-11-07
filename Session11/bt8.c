#include <stdio.h>

int main()
{
    int i, j;
    int arr[] = {2, 5, 3, 2, 8, 3, 43, 5, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxCount = 0;
    int xuatHien = arr[0];

    for (i = 0; i < n; i++)
    {
        int count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            xuatHien = arr[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat: %d\n", xuatHien);
    printf("So lan xuat hien: %d\n", maxCount);

    return 0;
}
