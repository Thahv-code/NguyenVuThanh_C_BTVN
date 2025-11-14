#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "Nguyen Tien Dat ";
    int lenght = strlen(name);
    printf("ten ban dau la :%s\n", name);
    printf("ten sau dao nguoc la :");
    for (int i = lenght - 1; i >= 0; i--)
    {
        printf("%c", name[i]);
    }
}