#include <stdio.h>

int calculateSum(int x, int y)
{
    printf("Moi ban nhap vao so thu nhat: ");
    scanf("%d", &x);
    printf("Moi ban nhap vao so thu hai: ");
    scanf("%d", &y);
    int sum = x + y;
    return sum;
}
int main()
{
    int x, y;
    int sum = 0;
    sum = calculateSum(x, y);
    printf("Tong cua 2 so la: %d", sum);
    return 0;
}