/*
Viết chương trình nhập vào một số nguyên n.
- Nếu n > 0: Tính & in ra tổng các chữ số của n.
- Nếu n <= 0: In thông báo "Error".
*/

#include<stdio.h>
#include "ThucHanh1.h"
#include <iostream>

int ThucHanh1::Bai8()
{
    // Viết các dòng lệnh của bạn ở đây
    int n;
    printf("n = ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Error");
        return 0;
    }
    int tongChuSo = 0;
    do {
        tongChuSo += n % 10;
        n /= 10;
    } while (n > 0);
    printf("Tong chu so = %d", tongChuSo);
    return 0;
}