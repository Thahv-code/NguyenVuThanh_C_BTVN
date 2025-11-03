#include <stdio.h>
int main()
{
    int number;
    int nghin, tram, chuc, donvi, S;
    printf("Nhap so:");
    scanf("%d", &number);
    nghin = number / 1000;
    tram = (number / 100) % 10;
    chuc = (number / 10) % 10;
    donvi = number % 10;
    S = nghin + tram * 10 + chuc * 100 + donvi * 1000;
    printf("So nghich dao la: %d\n", S);
    return 0;
}