#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    int demChan = 0, demLe = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            demChan++;
        else
            demLe++;
    }

    printf("\nSo luong so chan: %d\n", demChan);
    printf("So luong so le: %d\n", demLe);

    printf("\nCac so chan la: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    printf("\nCac so le la: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}