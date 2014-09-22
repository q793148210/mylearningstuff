
#include <iostream>
#include "maxheap.h"

int main()
{
	int array[] = { 1, 100, 3, 75, 5, 29, 7 };
	
	maxheap<int> mheap(array, 7, 7);
	
//	heapSort(array, 7);
	
	int result;
	mheap.removemax(result);
	mheap.insert(100);
	for (int i = 0; i < mheap.heapsize(); i++)
		std::cout << array[i] << " ";
	return 0;
}