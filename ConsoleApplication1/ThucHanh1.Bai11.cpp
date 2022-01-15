#include <stdio.h>
#include "ThucHanh1.h"
#include <iostream>
int kiemTraSoNguyenTo(int n) {
	if (n < 3) {
		return 1;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int ThucHanh1::Bai11()
{
	int n;
	printf("n = ");
	scanf_s("%d", &n);
	for (int i = 2; i <= n; i++) {
		if (kiemTraSoNguyenTo(i) == 1) {
			printf("%d\t", i);
		}
	}
	return 0;
}