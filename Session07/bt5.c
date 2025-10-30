#include <stdio.h>
#include <math.h>
int main()
{
    int n, original_n, digit, num_digits = 0, i;
    long long sum = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    original_n = n;

    while (n != 0)
    {
        n /= 10;
        num_digits++;
    }

    n = original_n;

    while (n != 0)
    {
        digit = n % 10;
        sum += pow(digit, num_digits);
        n /= 10;

        if (sum == original_n)
        {
            printf("%d la so Armstrong.\n", original_n);
        }
        else
        {
            printf("%d khong la so Armstrong.\n", original_n);
        }

        return 0;
    }
}