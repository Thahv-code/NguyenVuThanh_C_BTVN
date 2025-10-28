#include <stdio.h>

int main()
{
    int score;

    printf("Nhap so diem cua ban: ");
    scanf("%d", &score);
    if (score < 0 || score > 10)
    {
        printf("So diem khong hop le");
    }
    else if (score < 3.5)
    {
        printf("Hoc luc yeu");
    }
    else if (score < 7.5)
    {
        printf("Hoc luc kha");
    }
    else
    {
        printf("Hoc luc gioi");
    }
    return 0;
}
