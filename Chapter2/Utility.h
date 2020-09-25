#pragma once
#include <iostream>

class Utility
{
public:
	template <typename T>
	static void printArr(T input[], int len) {
		for (int i = 0; i < len; ++i) {
			std::cout << input[i] << std::endl;
		}
	}

	template <typename T>
	static void swap(T* lhs, T* rhs) {
		//异或原地交换必须是整型
		//*lhs ^= *rhs;
		//*rhs ^= *lhs;
		//*lhs ^= *rhs;
		*lhs = *lhs + *rhs;
		*rhs = *lhs - *rhs;
		*lhs = *lhs - *rhs;
	}
};

void testUtilitySwap();


