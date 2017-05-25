#include "headFile.h"


int main()
{
	StudentNumberNode nodeArray[NODE_ARRAY_SIZE];   // declare a struct array, the struct contains serialNumber and studentNumber
	StudentNumberNode insertStruct;  // through the temporary struct stored datas into the nodeArray
	int i;  // debug data
	
	for(i = 1; i <= 12000; i++)
	{
		// Test whether the data was successfully stored in the node Array
		insertStruct.serialNumber = i;
		insertStruct.studentNumber = i * 10;
		nodeArray[i-1] = insertStruct;
	}
	
	BuildHeap(nodeArray, 12000); // starting build heap
	
	// show the result of buildHeap one by one
	for(i = 0; i < 12000; i++)
		printf("%d    %d\n", nodeArray[i].serialNumber, nodeArray[i].studentNumber);
	
	printf("%d    %d\n", nodeArray[0].serialNumber, nodeArray[0].studentNumber);  // printf the value of the root node of the tree
	printf("%d    %d\n", nodeArray[11999].serialNumber, nodeArray[11999].studentNumber); // printf the value of the last node of the tree
	
	insertStruct.serialNumber = 12001;
	insertStruct.studentNumber = -5;
	InsertHeap(nodeArray, insertStruct, 12000);
		
	return 0;
}
