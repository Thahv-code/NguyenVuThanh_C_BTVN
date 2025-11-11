#include <stdio.h>
#include <stdlib.h>

void printMenu() {
    printf("\n========== MENU ==========\n");
    printf("1. Nhap phan tu vao mang\n");
    printf("2. In mang\n");
    printf("3. Tinh tong cac phan tu trong mang\n");
    printf("4. Tim max\n");
    printf("5. Them phan tu vao vi tri bat ky\n");
    printf("6. Tim kiem phan tu\n");
    printf("7. Thoat\n");
    printf("========================\n");
    printf("Chon chuc nang: ");
}

void inputArray(int arr[], int *n) {
    if (*n >= 100) {
        printf("Mang da day, khong the nhap them!\n");
        return;
    }
    
    printf("Nhap so luong phan tu muon them: ");
    int count;
    scanf("%d", &count);
    
    if (*n + count > 100) {
        printf("Vuot qua kich thuoc mang toi da!\n");
        return;
    }
    
    for (int i = *n; i < *n + count; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    *n += count;
    printf("Them phan tu thanh cong!\n");
}

void printArray(int arr[], int n) {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    
    printf("Cac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

void calculateSum(int arr[], int n) {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Tong cac phan tu trong mang: %d\n", sum);
}

void findMax(int arr[], int n) {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    
    int max = arr[0];
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }
}


int main() {
    int arr[100];
    int n = 0; 
    int choice;
    
    while (1) {
        printMenu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                inputArray(arr, &n);
                break;
            case 2:
                printArray(arr, n);
                break;
            case 3:
                calculateSum(arr, n);
                break;
            case 4:
                findMax(arr, n);
                break;
            case 5:
                insertElement(arr, &n);
                break;
            case 6:
                searchElement(arr, n);
                break;
            case 7:
                printf("Cam on da su dung chuong trinh!\n");
                exit(0);
            default:
                printf("Lua chon khong hop le! Vui long chon lai!\n");
        }
    }
    
    return 0;
}
