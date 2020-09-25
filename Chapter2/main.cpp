#include <iostream>
#include <memory.h>

#include "Utility.h"
#include "Factory.h"

void addBinaryInteger(bool lhs[], bool rhs[], bool ret[], int len);
void testAddBinaryInteger();

void main() {
	//testUtilitySwap();
	//testAddBinaryInteger();
	//testInsertionSort();
	testSelectionSort();
}

void addBinaryInteger(bool lhs[], bool rhs[], bool ret[], int len) {
	int step = 0;
	for (int i = 0; i < len; ++i) {
		if (((lhs[i] && rhs[i]) == 1) || ((lhs[i] || rhs[i]) == 0)) {
			ret[i] = step;
			step = lhs[i];
		}
		else if ((lhs[i] || rhs[i]) == 1) {
			ret[i] = 1 - step;
			// step = 0 不进位， step = 1 进位，故step保持不变即可
		}
	}
	ret[len] = step;
}

void testAddBinaryInteger() {
	bool lhs[] = { 1, 0, 1, 1, 0 };
	bool rhs[] = { 0, 1, 1, 0, 1 };
	int len = 5;
	bool ret[6] = { 0 };
	std::cout << "Before add:" << std::endl;
	std::cout << "lhs is:" << std::endl;
	Utility::printArr<bool>(lhs, len);
	std::cout << "rhs is:" << std::endl;
	Utility::printArr<bool>(rhs, len);
	std::cout << "ret is:" << std::endl;
	Utility::printArr<bool>(ret, len + 1);

	addBinaryInteger(lhs, rhs, ret, len);
	std::cout << std::endl << "After add:" << std::endl;
	std::cout << "lhs is:" << std::endl;
	Utility::printArr<bool>(lhs, len);
	std::cout << "rhs is:" << std::endl;
	Utility::printArr<bool>(rhs, len);
	std::cout << "ret is:" << std::endl;
	Utility::printArr<bool>(ret, len + 1);
}