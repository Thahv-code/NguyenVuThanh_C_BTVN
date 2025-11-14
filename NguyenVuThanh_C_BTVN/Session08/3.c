#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // khai bao va gan gia tri cho mang
    int demChan = 0;

    printf("Cac so chan trong mang la:");
    for (int i = 0; i < 5; i++)
    { // dung de duyet tung phan tu trong mang
        if (arr[i] % 2 == 0)
        { // dung de kiem tra so chan
            printf("%d ", arr[i]);
            demChan = 1;
        }
    }
    if (demChan == 0)
    {
        printf(" Mang khoong co so chan");
    }
    return 0;
}