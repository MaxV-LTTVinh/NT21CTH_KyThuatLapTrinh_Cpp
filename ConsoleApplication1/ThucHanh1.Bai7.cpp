/*
Viết chương trình nhập vào 2 số nguyên a,b bất kỳ
và một ký hiệu phép toán '+', '-', '*', '/'.
In ra giá trị của biểu thức tương ứng với phép toán.
*/

#include<stdio.h>
#include "ThucHanh1.h"
#include <iostream>

int ThucHanh1::Bai7()
{
    int a, b;
    // Viết các dòng lệnh của bạn ở đây
    printf("Nhap vao 2 so nguyen: ");
    scanf("%d%d", &a, &b);
    printf("Nhap phep toan (+, -, *, /):");
    char* c;
    scanf("%s", c);

    if (strcmp("+", c) == 0) {
        printf("%d %s %.d = %d", a, c, b, a + b);
        return 0;
    }

    if (strcmp("-", c) == 0) {
        printf("%d %s %d = %d", a, c, b, a - b);
        return 0;
    }

    if (strcmp("*", c) == 0) {
        printf("%.d %s %.d = %d", a, c, b, a * b);
        return 0;
    }
    if (strcmp("/", c) == 0) {

        if (b == 0) {
            printf("Loi chia cho 0!");
            return 0;
        }
        printf("%d %s %d = %.2f", a, c, b, (float)a / b);
        return 0;
    }

    printf("Khong thuc hien duoc");
    return 0;
}