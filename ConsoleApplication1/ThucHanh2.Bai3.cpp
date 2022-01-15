#include <stdio.h>
#include "ThucHanh2.h"
#include <iostream>
void ThucHanh2::Bai3() {

}
/* Chú ý: 
- Không thay đổi các dòng lệnh bên dưới
- Không viết hàm main
*/

int TongPhanTu(int a[], int n)
{
    // Viết các dòng lệnh của bạn ở đây
    int s = 0;
    for (int i = 0; i < n; i++) s += a[i];
    return s;
}