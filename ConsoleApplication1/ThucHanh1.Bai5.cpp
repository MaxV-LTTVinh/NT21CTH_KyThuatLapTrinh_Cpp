#include<stdio.h>
#include<math.h>
#include "ThucHanh1.h"
#include <iostream>

int ThucHanh1::Bai5()
{
    // Viết các dòng lệnh của bạn ở đây
    float a, b, c;
    printf("Nhap a:");
    scanf("%f", &a);
    printf("Nhap b:");
    scanf("%f", &b);
    printf("Nhap c:");
    scanf("%f", &c);
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("khong thoa man");
        return  0;
    }
    float p = (a + b + c) / 2;
    float dt = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Dien tich = %.2f", dt);
    return 0;
}