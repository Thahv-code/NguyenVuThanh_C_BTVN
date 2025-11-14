#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "Nguyen Vu Thanh ";
    int lenght = strlen(name);
    int cnt = 0;
    for (int i = 0; i < lenght; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z' || name[i] >= 'a' && name[i] <= 'z')
        {
            cnt++;
        }
    }
    printf("ten :%s\n", name);
    printf("so ki tu la chu cai :%d\n", cnt);
}