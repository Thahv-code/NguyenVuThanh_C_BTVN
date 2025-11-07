#include <stdio.h>

int main()
{
    int arr[] = {100, 95, 90, 50, 85, 92};
    int i;
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n < 2)
    {
        printf("Khong du du lieu .\n");
        return 0;
    }

    int buy = arr[0];
    int bestLo = arr[1] - buy;
    int bestLai = 1;

    for (i = 2; i < n; i++)
    {
        int lo = arr[i] - buy;
        if (lo > bestLo)
        {
            bestLo = lo;
            bestLai = i;
        }
    }

    printf("Gia mua vao: %d\n", buy);
    printf("Thang ban tot nhat: thang %d (gia = %d 000 000 Vnd)\n", bestLai + 1, arr[bestLai]);
    printf("Loi/Lo: %d\n", bestLo);

    return 0;
}