#include "Utility.h"

void testUtilitySwap() {
	int a = 4, b = 5;
	std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
	Utility::swap<int>(&a, &b);
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
}