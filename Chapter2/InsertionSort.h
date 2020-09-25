#pragma once
#include "Sort.h"

template<typename T>
class InsertionSort :
    public Sort<T>
{
public:
    void sort(T input[], int len) override;
};

template<typename T>
void InsertionSort<T>::sort(T input[], int len) {
	int i, j;
	T key;
	//Ascending order
	for (i = 1; i < len; ++i) {
		key = input[i];
		j = i - 1;
		while (j > 0 && key < input[j]) {
			input[j + 1] = input[j];
			--j;
		}
		input[j + 1] = key;
	}
}

void testInsertionSort();

