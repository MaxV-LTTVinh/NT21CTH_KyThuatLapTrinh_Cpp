#include<stdio.h>
#include "ThucHanh1.h"
#include <iostream>

int ThucHanh1::Bai3()
{
    // Viết các dòng lệnh của bạn ở đây
    float dtb;
    printf("Nhap diem trung binh: ");
    scanf("%f", &dtb);
    if (dtb > 10 || dtb < 0) {
        printf("Error");
        return 0;
    }

    if (dtb >= 8) {
        printf("Gioi");
        return 0;
    }

    if (dtb >= 7) {
        printf("Kha");
        return 0;
    }

    if (dtb >= 5) {
        printf("Trung binh");
        return 0;
    }
    printf("Yeu");
    return 0;
}