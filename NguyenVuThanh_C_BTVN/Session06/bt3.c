#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("hay nhap mot so nguyen duong bat ky ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("tong cac so tu 1 den %d la %d\n", num, sum);
    return 0;
}