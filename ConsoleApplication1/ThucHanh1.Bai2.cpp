#include <stdio.h>
#include "ThucHanh1.h"
#include <iostream>
int ThucHanh1::Bai2() {
	float a, b, c;
	printf("Nhap a,b,c: ");
	scanf_s("%f%f%f", &a, &b, &c);
	if (a == 0)
	{
		if (b == 0) {
			if (c == 0) {
				printf("Phuong trinh co vo so nghiem");
				return 0;
			}
			printf("Phuong trinh vo nghiem");
			return 0;
		}
		printf("Nghiem kep x = %.2f", -c / a);
		return 0;
	}

	float delta = b * b - 4 * a * c;
	if (delta < 0)
	{
		printf("Phuong trinh vo nghiem");
		return 0;
	}

	if (delta == 0)
	{
		float x = -b / (2 * a);
		printf("Nghiem kep x = %.2f", x);
		return 0;
	}

	delta = sqrt(delta);
	float x1 = (-b + delta) / (2 * a);
	float x2 = (-b - delta) / (2 * a);
	printf("x1 = %.2f x2 = %.2f", x1, x2);
	return 0;
}