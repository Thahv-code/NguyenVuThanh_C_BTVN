#include <stdio.h>

int main()
{
    int i, num1, num2;
    while (i != 6)
    {
        printf("MENU\n");
        printf("1. Nhap 2 so\n");
        printf("2. Tong 2 so\n");
        printf("3. Hieu 2 so\n");
        printf("4. Tich 2 so\n");
        printf("5. Thuong 2 so\n");
        printf("6. Thoat\n");
        printf("hay nhap lua chon cua ban : ");
        scanf("%d", &i);
        if (i == 1)
        {
            printf("hay nhap so thu nhat : ");
            scanf("%d", &num1);
            printf("hay nhap so thu hai : ");
            scanf("%d", &num2);
        }
        else if (i == 2)
        {
            int sum;
            sum = num1 + num2;
            printf("tong hai so la %d\n", sum);
        }
        else if (i == 3)
        {
            int hieu;
            hieu = num1 - num2;
            printf("hieu cua hai so la %d\n", hieu);
        }
        else if (i == 4)
        {
            int x;
            x = num1 * num2;
            printf("tich cua hai so la %d\n", x);
        }
        else if (i == 5)
        {
            int y;
            y = num1 % num2;
            printf("thuong cua 2 so la %d\n", y);
        }
        else if (i == 6)
        {
            return 0;
        }
        else
        {
            printf("khong co lua chon nay\n");
        }
    }

    return 0;
}