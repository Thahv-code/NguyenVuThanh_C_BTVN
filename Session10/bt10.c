#include <stdio.h>

int findMin(int arr[], int n)
{
    int min = arr[0];
    int i;
    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

void selectionSort(int arr[], int n)
{
    int i, j;
    int minIndex;
    int temp;
    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int binarySearch(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    int mid;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1; 
}

int main()
{
    int n;
    int arr[100];
    int target;
    int min;
    int index;
    int i;

    printf("Nhap so luong phan tu");
    scanf("%d", &n);

    printf("Nhap mang: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Nhap so can tim");
    scanf("%d", &target);

    min = findMin(arr, n);
    printf("So nguyen nho nhat trong mang la: %d\n", min);
    selectionSort(arr, n);

    printf("Mang sau khi sap xep theo thu tu tang dan: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
    index = binarySearch(arr, n, target);

    if (index != -1)
    {
        printf("Phan tu %d co chi so %d trong mang da sap xep.\n", target, index);
    }
    else
    {
        printf("Khong tim thay\n");
    }

    return 0;
}
