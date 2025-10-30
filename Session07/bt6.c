#include <stdio.h>
int main()
{
    int n, soDaonguoc = 0, soGoc;
    printf("Nhap mot so nguyen duong :");
    scanf("%d", &n);
    soGoc = n;
    while (n != 0)
    {
        int chuSoCuoi = n % 10;
        soDaonguoc = soDaonguoc * 10 + chuSoCuoi;
        n /= 10;
    }
    if (soGoc = soDaonguoc)
    {
        printf("%d la so dao nguoc . \n", soGoc);
    }
    else
    {
        printf("%d khong  la so dao nguoc .\n", soDaonguoc);
    }
    return 0;
}