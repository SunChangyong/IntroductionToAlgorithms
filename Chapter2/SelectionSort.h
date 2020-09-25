#pragma once
#include "Sort.h"

template <typename T>
class SelectionSort :
    public Sort<T>
{
public:
    void sort(T input[], int len) override;
};

template <typename T>
void SelectionSort<T>::sort(T input[], int len) {
    int i, j, smallest;
    for (i = 0; i < len - 1; ++i) {
        smallest = i;
        for (j = i + 1; j < len; ++j) {
            if (input[j] < input[smallest]) smallest = j;
        }
        if (smallest != i) Utility::swap<T>(&input[i], &input[smallest]);
    }
}

void testSelectionSort();