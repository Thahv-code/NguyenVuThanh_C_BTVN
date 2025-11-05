#include <stdio.h>

int main()
{
    int n;
    int i, j;
    printf("Nhap so luong san pham: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("So luong san pham khong hop le\n");
        return 1;
    }
    int prices[n];
    printf("Nhap gia cua %d san pham: ", n);
    for (i = 0; i < n; i++)
    {
        if (scanf("%d", &prices[i]) != 1)
        {
            printf("Du lieu nhap khong hop le\n");
            return 1;
        }
    }
    int id;
    printf("Nhap ma san pham (ID) can tim: ");
    if (scanf("%d", &id) != 1)
    {
        printf("Du lieu nhap khong hop le\n");
        return 1;
    }
    if (id < 0 || id >= n)
    {
        printf("Ma san pham khong hop le\n");
        return 1;
    }
    int foundPrice = prices[id];
    printf("Gia cua san pham voi ma ID %d: %d\n", id, foundPrice);
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (prices[j] > prices[j + 1])
            {
                int tmp = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = tmp;
            }
        }
    }
    printf("Danh sach gia san pham sau khi sap xep: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", prices[i]);
    }

    int left = 0, right = n - 1;
    int searchIndex = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (prices[mid] == foundPrice)
        {
            searchIndex = mid;
            break;
        }
        else if (prices[mid] < foundPrice)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return 0;
}
