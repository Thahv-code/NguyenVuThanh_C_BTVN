#include <stdio.h>
#include <math.h>

#define MAX 100

// Hàm kiểm tra số chính phương
int laSoChinhPhuong(int n)
{
    if (n < 0)
        return 0;
    int sqr = sqrt(n);
    return (sqr * sqr == n);
}

// Hàm in menu
void menu()
{
    printf("\n========= MENU =========\n");
    printf("1. Nhap mang\n");
    printf("2. In mang\n");
    printf("3. In cac so chinh phuong\n");
    printf("4. Tinh trung binh cong\n");
    printf("5. Them phan tu vao cuoi mang\n");
    printf("6. Xoa phan tu tai vi tri\n");
    printf("7. Sap xep giam dan (Bubble Sort)\n");
    printf("8. Tim kiem phan tu (Linear Search)\n");
    printf("9. In cac phan tu chi xuat hien 1 lan\n");
    printf("10. Sap xep nguoc lai\n");
    printf("0. Thoat\n");
    printf("=========================\n");
}

int main()
{
    int a[MAX], n = 0, choice;

    do
    {
        menu();
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        { // Nhập mảng
            printf("Nhap so luong phan tu: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                printf("a[%d] = ", i);
                scanf("%d", &a[i]);
            }
            break;
        }

        case 2:
        { // In mảng
            printf("Mang hien tai: ");
            for (int i = 0; i < n; i++)
                printf("%d ", a[i]);
            printf("\n");
            break;
        }

        case 3:
        { // In số chính phương
            printf("Cac so chinh phuong: ");
            for (int i = 0; i < n; i++)
                if (laSoChinhPhuong(a[i]))
                    printf("%d ", a[i]);
            printf("\n");
            break;
        }

        case 4:
        { // Tính trung bình
            double sum = 0;
            for (int i = 0; i < n; i++)
                sum += a[i];
            printf("Gia tri trung binh: %.2lf\n", sum / n);
            break;
        }

        case 5:
        { // Thêm phần tử
            int x;
            printf("Nhap phan tu can them: ");
            scanf("%d", &x);
            if (n < MAX)
                a[n++] = x;
            else
                printf("Mang da day!\n");
            break;
        }

        case 6:
        { // Xóa phần tử
            int pos;
            printf("Nhap vi tri can xoa (0..%d): ", n - 1);
            scanf("%d", &pos);
            if (pos >= 0 && pos < n)
            {
                for (int i = pos; i < n - 1; i++)
                    a[i] = a[i + 1];
                n--;
            }
            else
                printf("Vi tri khong hop le!\n");
            break;
        }

        case 7:
        { // Sắp xếp giảm dần
            for (int i = 0; i < n - 1; i++)
                for (int j = 0; j < n - i - 1; j++)
                    if (a[j] < a[j + 1])
                    {
                        int temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
            printf("Da sap xep giam dan!\n");
            break;
        }

        case 8:
        { // Tìm kiếm tuyến tính
            int x, found = 0;
            printf("Nhap gia tri can tim: ");
            scanf("%d", &x);
            for (int i = 0; i < n; i++)
                if (a[i] == x)
                {
                    printf("Tim thay %d tai vi tri %d\n", x, i);
                    found = 1;
                }
            if (!found)
                printf("Khong tim thay %d trong mang\n", x);
            break;
        }

        case 9:
        { // In phần tử chỉ xuất hiện 1 lần
            printf("Cac phan tu chi xuat hien 1 lan: ");
            for (int i = 0; i < n; i++)
            {
                int count = 0;
                for (int j = 0; j < n; j++)
                    if (a[i] == a[j])
                        count++;
                if (count == 1)
                    printf("%d ", a[i]);
            }
            printf("\n");
            break;
        }

        case 10:
        { // Sắp xếp ngược lại
            for (int i = 0; i < n / 2; i++)
            {
                int temp = a[i];
                a[i] = a[n - i - 1];
                a[n - i - 1] = temp;
            }
            printf("Da sap xep nguoc lai!\n");
            break;
        }

        case 0:
            printf("Thoat chuong trinh.\n");
            break;

        default:
            printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);

    return 0;
}