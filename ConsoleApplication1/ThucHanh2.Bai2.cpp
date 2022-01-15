#include <stdio.h>
#include "ThucHanh2.h"
#include <iostream>
#include <math.h>
void ThucHanh2::Bai2() {

}

int KiemTraSoNguyenTo(int n) {
    if (n < 2)
        return 0;
    if (n == 3 || n == 2)
        return 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void InDayNguyenTo(int m, int n)
{
    for (int i = m; i <= n; i++) {
        if (KiemTraSoNguyenTo(i) == 1) {
            printf("%d\t", i);
        }
    }
}