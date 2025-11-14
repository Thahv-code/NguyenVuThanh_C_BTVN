#include <stdio.h>

int main()
{
    float a, b;
    char operator;

    printf("Nhap so thu nhat (a): ");
    scanf("%f", &a);
    printf("Nhap so thu hai (b): ");
    scanf("%f", &b);
    printf("Nhap toan tu (+, -, *, /): ");
    getchar();
    scanf("%c", &operator);

    switch (operator)
    {
    case '+':
        printf("%.2f + %.2f = %.2f\n", a, b, a + b);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f\n", a, b, a - b);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f\n", a, b, a * b);
        break;
    case '/':
        if (b != 0)
        {
            printf("%.2f / %.2f = %.2f\n", a, b, a / b);
        }
        else
        {
            printf("Loi: Khong the chia cho 0\n");
        }
        break;
    default:
        printf("Loi: Toan tu khong hop le\n");
    }

    return 0;
}
