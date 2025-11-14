#include <stdio.h>

int main (){
    int num,sum;
    printf("Nhap 1 so tu 1 den 10: \n");
    scanf("%d", &num);
    printf("Bang cuu chuong cua so %d\n",num);
    for (int i = 0; i <= 10; i++){
        sum = num * i;
        printf("%d x %d = %d \n", num, i, sum);
    }
    
    return 0;
}