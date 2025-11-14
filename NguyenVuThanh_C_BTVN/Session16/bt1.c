#include <stdio.h>
#include <string.h>
int main()
{
    char chuoi[100];
    printf("Nhap mot chuoi bat ky: ");

    fgets(chuoi, sizeof(chuoi), stdin);

    chuoi[strcspn(chuoi, "\n")] = 0;

    printf("Chuoi vua nhap: %s\n", chuoi);

    int leght = strlen(chuoi);
    printf("Do dai chuoi:%d\n", leght);
    return 0;
}