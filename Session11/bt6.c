#include <stdio.h>
#include <limits.h>

int main() {
	int i;
    int arr[] = {12, 5, 9, 20, 20, 7, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n < 2) {
        printf("Mang phai co it nhat 2 phan tu!\n");
        return 0;
    }

    int max1 = arr[0];  
    int max2 = arr[0];  

    for (i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;   
            max1 = arr[i]; 
        }
        else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    if (max2 == arr[0]){
        printf("Khong co phan tu lon thu hai trong mang (cac phan tu co the bang nhau).\n");
    } else {
        printf("Phan tu lon nhat: %d\n", max1);
        printf("Phan tu lon thu hai: %d\n", max2);
    }

    return 0;
}
