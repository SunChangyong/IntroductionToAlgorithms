#pragma once
#include <iostream>

template<typename T>
class Sort
{
public:
	Sort() {}
	virtual ~Sort() {}
	virtual void sort(T input[], int len) {}
};