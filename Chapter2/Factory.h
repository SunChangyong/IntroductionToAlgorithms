#pragma once
#include <memory>
#include "Sort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"

enum SORT_METHOD {
	INSERTION_SORT = 0,
	SELECTION_SORT = 1,
};

template<typename T>
std::unique_ptr<Sort<T>> createSortMethod(SORT_METHOD method) {
	std::unique_ptr<Sort<T>> sortMethod = nullptr;
	switch (method) {
	case INSERTION_SORT:
		sortMethod = std::unique_ptr<Sort<T>>(new InsertionSort<T>());
	case SELECTION_SORT:
		sortMethod = std::unique_ptr<Sort<T>>(new SelectionSort<T>());
	}
	return std::move(sortMethod);

}

