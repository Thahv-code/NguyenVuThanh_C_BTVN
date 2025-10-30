#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;

    printf("Nhap vao so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap vao so nguyen b: ");
    scanf("%d", &b);

    printf("Cac so nguyen to trong khoang [%d, %d] la:\n", a, b);

    for (int i = a; i <= b; i++)
    {

        if (isPrime(i))
        {

            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}