#include <stdio.h>

int giaiThua(int n)
{
    int x = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        x = x * i;
    }
    return x;
}
int main()
{
    int n;
    printf("Moi ban nhap vao so: ");
    scanf("%d", &n);
    int gt = giaiThua(n);
    printf("Giai thua cua so %d la: %d", n, gt);
    return 0;
}