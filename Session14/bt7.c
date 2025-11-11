#include <stdio.h>

int printMax(int n)
{
    int i;
    int max = 0;
    int numbers[100];
    printf("Nhap vao gia tri cua mang (1-100): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Nhap arr[%d] = ", i);
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (max < numbers[i])
        {
            max = numbers[i];
        }
    }
    return max;
}

int main()
{
    int n;
    int max = printMax(n);
    printf("So lon nhat trong mang la: %d", max);

    return 0;
}