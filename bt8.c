#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = " Nguyen Tien Dat ";
    int lenght = strlen(name);
    if (name[0] >= 'a' && name[0] <= 'z')
    {
        name[0] = name[0] - 'a' + 'A';
    }
    for (int i = 1; i < lenght; i++)
    {
        if (name[i - 1] == ' ' && name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 'a' + 'A';
        }
    }
    printf("ten sau khi viet hoa chu cai dau la :%s\n", name);
}