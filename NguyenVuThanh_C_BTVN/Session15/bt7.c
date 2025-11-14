#include <stdio.h>
int binarySearch(int arr[], int n, int x)
{
    int left = 0, right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[100], n, x;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu (da sap xep tang dan):\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int result = binarySearch(arr, n, x);

    if (result != -1)
        printf("Phan tu %d duoc tim thay tai vi tri %d.\n", x, result);
    else
        printf("Khong tim thay phan tu %d trong mang.\n", x);

    return 0;
}
