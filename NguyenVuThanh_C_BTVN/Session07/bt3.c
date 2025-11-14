#include <stdio.h>

int main()
{
    int n, reversed_n = 0, remainder;
    int original_n;

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    original_n = n;

    while (n != 0)
    {
        remainder = n % 10;
        reversed_n = reversed_n * 10 + remainder;
        n /= 10;
    }

    if (original_n == reversed_n)
    {
        printf("%d la so doi xung.\n", original_n);
    }
    else
    {
        printf("%d khong la so doi xung .\n", original_n);
    }

    return 0;
}