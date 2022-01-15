#include <stdio.h>
#include "ThucHanh1.h"
#include <iostream>
float TinhTienGuiTienKiem(float tg, float l, int kh) {
	printf("%f\n", l);
	if (kh == 1)
		return (1 + l) * tg;
	float tg2 = TinhTienGuiTienKiem(tg, l, kh - 1);
	return (1 + l) * tg;
}

int Bai10()
{
	// Viết các dòng lệnh của bạn ở đây
	// Lưu ý, xuất kết quả đúng theo yêu cầu (xem kết quả chạy mẫu)
	int kh;
	float l, tg;
	printf("Nhap so tien gui (trieu VND):");
	scanf_s("%f", &tg);
	printf("Lai suat (%/thang):");
	scanf_s("%f", &l);
	printf("Ky han (thang):");
	scanf_s("%d", &kh);
	float tt = TinhTienGuiTienKiem(tg, l / 100, kh);
	printf("Tong so tien sau %d thang la %.2f (trieu VND)", kh, tt);
	return 0;
}