#include <stdio.h>

int main()
{
    int age;
    const int ticket_price = 20000;
    int final_price;

    printf("Nhap Tuoi : ");
    scanf("%d", &age);

    if (age < 0 || age > 70)
    { 
        printf("Tuoi khong hop le");
    }
    else if (age < 6)
    { 
        printf("So tien ve : 0 VND");
    }
    else if (age <= 18)
    { 
        final_price = ticket_price * 0.5;
        printf("So tien ve : %d VND", final_price);
    }
    else if (age <= 60)
    { 
        final_price = ticket_price;
        printf("So tien ve : %d VND", final_price);
    }
    else
    { 
        final_price = ticket_price * 0.7;
        printf("So tien ve : %d VND", final_price);
    }

    return 0;
}