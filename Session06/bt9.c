#include <stdio.h>

int main()
{
    int i, num1, num2, num3;
    while (i != 6)
    {
        printf("MENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("hay nhap lua chon cua ban : ");
        scanf("%d", &i);
        if (i == 1)
        {
            printf("hay nhap so thu nhat : ");
            scanf("%d", &num1);
            printf("hay nhap so thu hai : ");
            scanf("%d", &num2);
            printf("hay nhap so thu ba : ");
            scanf("%d", &num3);
        }
        else if (i == 2)
        {
            int sum;
            sum = num1 + num2 + num3;
            printf("tong ba so la %d\n", sum);
        }
        else if (i == 3)
        {
            int tbc;
            tbc = (num1 + num2 + num3) / 3;
            printf("trung binh cong cua ba so la %d\n", tbc);
        }
        else if (i == 4)
        {
            if (num1 < num2 && num1 < num3)
            {
                printf("%d la so be nhat\n", num1);
            }
            else if (num2 < num1 && num2 < num3)
            {
                printf("%d la so be nhat\n", num2);
            }
            else if (num3 < num1 && num3 < num2)
            {
                printf("%d la so be nhat\n", num3);
            }
        }
        else if (i == 5)
        {
            if (num1 > num2 && num1 > num3)
            {
                printf("%d la so lon nhat\n", num1);
            }
            else if (num2 > num1 && num2 > num3)
            {
                printf("%d la so lon nhat\n", num2);
            }
            else if (num3 > num1 && num3 > num2)
            {
                printf("%d la so lon nhat\n", num3);
            }
        }
        else if (i == 6)
        {
        }
        else
        {
            printf("khong co lua chon nay ");
        }
    }

    return 0;
}