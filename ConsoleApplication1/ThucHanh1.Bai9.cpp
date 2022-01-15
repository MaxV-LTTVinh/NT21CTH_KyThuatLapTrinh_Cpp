#include<stdio.h>
#include "ThucHanh1.h"
#include <iostream>

float BieuThuc(int n) {
    if (n == 1)
        return 1;
    float tong = 0;
    for (int i = 1; i <= n; i++) {
        tong += i;
    }
    return 1 / tong + BieuThuc(n - 1);
}

int ThucHanh1::Bai9()
{
    // Viết các dòng lệnh của bạn ở đây
    // Lưu ý, xuất kết quả đúng theo yêu cầu (xem kết quả chạy mẫu)
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Error");
        return 0;
    }
    printf("S = %.3f", BieuThuc(n));
    return 0;

}