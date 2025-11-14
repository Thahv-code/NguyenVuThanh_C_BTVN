#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "Nguyen Vu Thanh";
    int lenght = strlen(name);
    int cnt = 0;
    for (int i = 0; i < lenght; i++)
    {
        if (name[i] != ' ' && (name[i + 1] == ' ' || name[i + 1] == '\0'))
        {
            cnt++;
        }
    }
    printf("ten : %s\n", name);
    printf("so tu trong chuoi :%d\n", cnt);
}