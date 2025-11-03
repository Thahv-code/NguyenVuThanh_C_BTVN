#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Nhap a:");
    scanf("%d", &a);
    printf("Nhap b:");
    scanf("%d", &b);
    printf("Nhap c:");
    scanf("%d", &c);
    if (c > a && c < b || c > b && c < a)
    {
        printf("c nham giua khoang a va b");
    }
    else
    {
        printf("c khong nham giua khoang a va b");
    }
}