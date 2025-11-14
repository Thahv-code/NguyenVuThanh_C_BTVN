
#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a = 1;
    // kiểu dữ liệu số nguyên để lưu trữ số nguyên dương hoặc nguyên âm
    float b = 1.5;
    // kiểu dữ liệu số thực để lưu trữ số có dấu thập phân
    double c = 4.5;
    // kiểu dữ liệu số thực để lưu trữ số có dấu thập phân và có số byte nhiều hơn float và lưu được 15 số sau dấu phẩy
    char d = 'w';
    // kiểu kí tự để lưu một kí tự
    printf("a la %d, b la %f, c la %lf, d la %c\n", a, b, c, d);
    return 0;
}
