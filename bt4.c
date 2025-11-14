#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Lap trinh C co ban";
    char character;
    int count = 0;
    printf("Nhap mot ky tu bat ky :");
    scanf("%c", &character);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == character)
        {
            count++;
        }
    }
    printf("Ky tu %c xuat hien %d lan trong chuoi da khai bao.\n", character, count);

    return 0;
}