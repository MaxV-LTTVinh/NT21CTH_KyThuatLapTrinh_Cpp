#include<stdio.h>
#include "ThucHanh1.h"
#include <iostream>

int ThucHanh1::Bai3()
{
    float chieuCao, canNang;
    // Viết các dòng lệnh của bạn ở đây
    printf("Nhap chieu cao (m): ");
    scanf("%f", &chieuCao);
    printf("Nhap can nang (kg): ");
    scanf("%f", &canNang);
    float BMI = canNang / (chieuCao * chieuCao);

    printf("Chieu cao = %.1f(m), can nang = %.1f(kg) => BMI = %.1f\n", chieuCao, canNang, BMI);

    if (BMI < 18.5) {
        printf("gay");
        return 0;
    }

    if (BMI < 24.9) {
        printf("Binh thuong");
        return 0;
    }

    if (BMI < 29.9) {
        printf("Thua can (map)");
        return 0;
    }

    printf("Beo phi");
    return 0;
}