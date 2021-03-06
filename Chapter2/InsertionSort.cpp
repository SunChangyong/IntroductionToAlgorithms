#include "Utility.h"
#include "InsertionSort.h" 
#include "Factory.h"

void testInsertionSort() {
	double f[] = { 1.1, 2.3, 1.2, 5.4, 4.6 };
	int len = 5;
	std::cout << "Before sort:" << std::endl;
	Utility::printArr<double>(f, len);
	std::unique_ptr<Sort<double>> sortMethod = createSortMethod<double>(INSERTION_SORT);
	sortMethod->sort(f, len);
	std::cout << "After sort:" << std::endl;
	Utility::printArr<double>(f, len);
}