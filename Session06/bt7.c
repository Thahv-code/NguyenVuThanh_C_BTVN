
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("hay nhap so thu nhat ");
    scanf("%d", &num1);
    printf("hay nhap so thu hai ");
    scanf("%d", &num2);
    int temp;
    if (num1 > num2)
    {
        temp = num1;
    }
    else
    {
        temp = num2;
    }
    for (int i = temp; i > 0; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            printf("uoc chung lon nhat cua hai so la %d\n", i);
            break;
        }
    }
    return 0;
}