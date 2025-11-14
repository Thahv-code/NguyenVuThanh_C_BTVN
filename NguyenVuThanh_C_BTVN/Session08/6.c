#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // khai bao va gan gia tri cho mang
    int i;

    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[i] += 3; // neu la so chan thi tang len 3 don vi
        }
        else
            arr[i] += 2; // neu la so le thi tang len 2 don vi
    }
    // in ra gia tri sau khi thay doi
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}