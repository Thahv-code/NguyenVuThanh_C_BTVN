
#include <stdio.h>

int main()
{
    int num = 1, x;

    printf("bang cuu chuong cua so %d\n", num);
    for (int i = 1; i <= 11; i++)
    {
        x = num * i;
        printf("%d x %d = %d \n", num, i, x);
        if (i == 10)
        {
            if (num == 9)
            {
                break;
            }
            i = 0;
            num++;
            printf("bang cuu chuong cua so %d\n", num);
        }
    }
    return 0;
}
