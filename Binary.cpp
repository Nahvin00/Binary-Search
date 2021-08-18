#include <iostream>
using namespace std;
#include "Binary.h"
bool Binary::BinarySearch(int array[], int SIZE, int target, int&
	locWanted)
{
	int mid = 0, begin = 0, end = SIZE - 1;
	while (begin <= end)
	{
		cout << "\n\tmid = " << mid;
		cout << " begin = " << begin;
		cout << " end = " << end;
		mid = (begin + end) / 2;
		if (target > array[mid])
			begin = mid + 1;
		else if (target < array[mid])
			end = mid - 1;
		else
			begin = end + 1;
	}
	locWanted = mid;
	return (target == array[mid]);
}