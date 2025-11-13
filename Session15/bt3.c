#include <stdio.h>
#include <stdlib.h>

int reverseNumber(int n)
{
    int reverseNum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        n = n / 10;
        reverseNum = reverseNum * 10 + digit;
    }
    return reverseNum;
}

int main()
{
    int number;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number); 

    int reverseNum = reverseNumber(number); 

    printf("So dao nguoc la: %d\n", reverseNum);
    return 0;
}