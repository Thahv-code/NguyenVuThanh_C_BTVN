#include <stdio.h>
int main()
{
    int n, i, x, ma = 0;
    printf("Nhap so phan tu n:\n");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("arr[%d] =", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri can tim x:");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("Tim thay %d tai vi tri so %d\n", x, i);
            ma = 1;
        }
    }
    if (ma == 0)
    {
        printf("Khong tim thay %d trong mang \n ", x);
    }
    return 0;
}