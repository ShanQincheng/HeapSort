# include <stdio.h>

# define NODE_ARRAY_SIZE 15000

typedef struct node
{
	int serialNumber; // serial number
	int studentNumber;  // serial number correspond
}StudentNumberNode;

//void AdjustHeap(StudentNumberNode *, int, int); // void AdjustHeap(StudentNumberNode *array, int i, int size)
int AdjustHeap(StudentNumberNode *, int, int); // void AdjustHeap(StudentNumberNode *array, int i, int size) Determine whether the subtree has been adjusted. if yes return 1 else return 0;
void BuildHeap(StudentNumberNode *, int); // void BuildHeap(StudentNumberNode *array, int size)
int InsertHeap(StudentNumberNode *, StudentNumberNode, int);  // int InsertHeap(StudentNumberNode *array, StudentNumberNode insertElement, int size)
void HeapSort(StudentNumberNode *, int);  // void HeapSort(StudentNumberNode *array, int size)
