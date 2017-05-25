#include "headFile.h"

void HeapSort(StudentNumberNode *array, int size)
{
	BuildHeap(array, size); 
	while(size > 0) // exchange from the last leaf to the root of the heap
	{
		StudentNumberNode temp; // exchange root node and the last node need a temporary node
		int parentNode = (size - 1 - 1) / 2; // parentNode position
		
		temp = array[0];
		array[0] = array[size - 1];
		array[size - 1] = temp;
		
		//BuildHeap(array, --size);
		AdjustHeap(array, 0, --size);
	}
}
