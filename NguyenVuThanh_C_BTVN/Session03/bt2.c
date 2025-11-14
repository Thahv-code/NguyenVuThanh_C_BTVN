#include <stdio.h>

int main(int argc, const char *argv[])
{
    int temp;
    printf("hay nhap nhiet do theo C : ");

    scanf("%d", &temp);
    float fah;
    fah = temp * 1.8 + 32;
    printf("%d do c khi chuyen qua do F la %.1f\n", temp, fah);
    return 0;
}