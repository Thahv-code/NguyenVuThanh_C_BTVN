#include <stdio.h>

int main(){
    int i, j, choice;
    int n;
    int arr[50]; 

    do
    {
        printf("\n***MENU***\n");
        printf("1. Nhap gia tri n phan tu: \n");
        printf("2. In cac gia tri phan tu: \n");
        printf("3. Tinh va in tong, trung bing cong cac phan tu: \n");
        printf("4. In ra gia tri lon nhat va nho nhat cua mang: \n");
        printf("5. Sap xep mang: \n");
        printf("6. Tim kiem phan tu: \n");
        printf("7. Xoa phan tu theo chi so phan tu : \n");
        printf("8. Chen 1 phan tu vao mang voi chi so va gia tri: \n");
        printf("9. Xoa cac phan tu co gia tri nhap tu ban phim: \n");
        printf("0. Exit \n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++)
                {
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                for (int i = 0; i < n; i++)
                {
                    printf(" %d", arr[i] );
                }
                break;
            case 3: 
                for ( i = 0; i < n; i++)
                {
                    
                }
                
                break;

            default:
            printf("Lua chon khong hop le\n");
                break;
        }
    } while (choice != 0);

    return 0;
}