// Binary search function in C++

#include "stdafx.h"
#include <iostream>

using namespace std;

// Function prototype
bool binary_search_func(int list[], int, int);

int main()
{
	int arr[5] = { 1, 3, 5, 7, 9 };

	cout << binary_search_func(arr, 3, 5) << endl;
	cout << binary_search_func(arr, -1, 5) << endl;

    return 0;
}

// Defines a function to binary search through a list of integers
bool binary_search_func(int list[], int item, int size)
{
	int mid,
		guess,
		low = 0,
		high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;
		guess = list[mid];

		if (guess == item)
		{
			cout << mid << endl;
			return true;
		}
		else if (guess > item)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return false;
}