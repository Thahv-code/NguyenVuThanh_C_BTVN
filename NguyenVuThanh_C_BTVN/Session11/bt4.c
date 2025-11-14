#include <stdio.h>

int main() {
    int choice, rows = 0, value, position;
    int run = 1;
    int arr[50];

    while (run) {
        printf("\n   MENU   \n");
        printf("1. Nhap so phan tu va gia tri cua mang\n");
        printf("2. In gia tri phan tu trong mang\n");
        printf("3. Dem so luong cac so hoan hao trong mang\n");
        printf("4. Tim gia tri nho thu 2 trong mang\n");
        printf("5. Them mot phan tu tai vi tri ngau nhien\n");
        printf("6. Xoa mot phan tu tai vi tri cu the\n");
        printf("7. Xap xep mang theo thu tang dan\n");
        printf("8. Tim kiem phan tu trong mang\n");
        printf("9. Sap xep mang hien thi phan le dung truoc phan chan dung sau\n");
        printf("10. Kiem tra mang co phai la mang tang dan khong\n");
        printf("11. Exit\n");
        printf("Hay nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Nhap so phan tu va gia tri cua mang
                printf("Moi ban nhap so phan tu (toi da 50): ");
                scanf("%d", &rows);
                if (rows > 0 && rows <= 50) {
                    printf("Nhap cac phan tu cua mang:\n");
                    for (int i = 0; i < rows; i++) {
                        printf("Nhap phan tu arr[%d]: ", i);
                        scanf("%d", &arr[i]);
                    }
                } else {
                    printf("So phan tu khong hop le. Moi ban nhap lai.\n");
                    rows = 0;
                }
                break;

            case 2: // In gia tri phan tu trong mang
                if (rows > 0) {
                    printf("Cac phan tu trong mang: ");
                    for (int i = 0; i < rows; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                } else {
                    printf("Mang chua co du lieu.\n");
                }
                break;

            case 3: // Dem so luong cac so hoan hao trong mang
                if (rows > 0) {
                    int count = 0;
                    for (int i = 0; i < rows; i++) {
                        int sum = 0;
                        for (int j = 1; j < arr[i]; j++) {
                            if (arr[i] % j == 0) {
                                sum += j;
                            }
                        }
                        if (sum == arr[i]) {
                            printf("So hoan hao: %d\n", arr[i]);
                            count++;
                        }
                    }
                    if (count == 0) {
                        printf("Khong co so hoan hao trong mang.\n");
                    }
                } else {
                    printf("Mang chua co du lieu.\n");
                }
                break;

            case 4: // Tim gia tri nho thu 2 trong mang
                if (rows > 1) {
                    int min = __INT_MAX__, second_min = __INT_MAX__;
                    for (int i = 0; i < rows; i++) {
                        if (arr[i] < min) {
                            second_min = min;
                            min = arr[i];
                        } else if (arr[i] < second_min && arr[i] != min) {
                            second_min = arr[i];
                        }
                    }
                    if (second_min == __INT_MAX__) {
                        printf("Khong co gia tri nho thu 2 trong mang.\n");
                    } else {
                        printf("Gia tri nho thu 2 trong mang: %d\n", second_min);
                    }
                } else {
                    printf("Mang khong du so phan tu.\n");
                }
                break;

            case 5: // Them mot phan tu tai vi tri ngau nhien
                if (rows < 50) {
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &value);
                    printf("Nhap vi tri can them (0-%d): ", rows);
                    scanf("%d", &position);
                    if (position >= 0 && position <= rows) {
                        for (int i = rows; i > position; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[position] = value;
                        rows++;
                        printf("Phan tu da duoc them.\n");
                    } else {
                        printf("Vi tri khong hop le.\n");
                    }
                } else {
                    printf("Mang da day.\n");
                }
                break;

            case 8: // Tim kiem phan tu trong mang
                if (rows > 0) {
                    printf("Nhap gia tri can tim: ");
                    scanf("%d", &value);
                    int found = 0;
                    for (int i = 0; i < rows; i++) {
                        if (arr[i] == value) {
                            printf("Gia tri %d tai vi tri arr[%d]\n", value, i);
                            found = 1;
                        }
                    }
                    if (!found) {
                        printf("Gia tri khong ton tai trong mang.\n");
                    }
                } else {
                    printf("Mang chua co du lieu.\n");
                }
                break;

            case 11: // Thoat chuong trinh
                printf("Thoat chuong trinh.\n");
                run = 0;
                break;
        }
    }

    return 0;
}