#include <stdio.h>
#include "ThucHanh1.h"
#include <iostream>
using namespace std;
void ThucHanh1::Bai1() {
	float sokwh = 0, sotien = 0;

	std::cout << "Nhap so dien tieu thu (kwh): ";
	std::cin >> sokwh;

	if (sokwh <= 0)
		cout << "So dien tieu thu > 0.\n";
	else
		if (sokwh <= 50)
			sotien = sokwh * 1500;
		else
			if (sokwh <= 100)
				sotien = (50 * 1500) + (sokwh - 50) * 1750;
			else
				sotien = (50 * 1500) + (50 * 1750) + (sokwh - 100) * 2000;

	std::cout << "--------------------------------" << endl;
	std::cout << "So dien tieu thu:\t" << sokwh << " (kwh)" << endl;
	std::cout << "So tien phai tra:\t" << sotien << " (vnd)" << endl;
}