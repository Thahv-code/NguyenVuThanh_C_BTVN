#include <stdio.h>
int main()
{
    int n, a[n];
    printf("Nhap so phan tu cua mang:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
        if (a[i] % 2 != 0)
        {
            printf("Phan tu khong thoa man,nhap lai.\n");
            printf("a[%d]=", i);
            scanf("%d", &a[i]);
        }
    }
}
