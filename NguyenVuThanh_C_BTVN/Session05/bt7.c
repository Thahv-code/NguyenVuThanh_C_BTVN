#include <stdio.h>

int main()
{
    char kyTu;

    printf("Nhap mot ky tu: ");
    scanf("%c", &kyTu);
    if (kyTu >= 'a' && kyTu <= 'z')
    {
        printf("Chu hoa tuong ung: %c\n", kyTu - 32);
    }
    else if (kyTu >= 'A' && kyTu <= 'Z')
    {
        printf("Chu thuong tuong ung: %c\n", kyTu + 32);
    }
    else
    {
        printf("Khong phai chu cai.\n");
    }

    return 0;
}
