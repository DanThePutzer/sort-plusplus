#include <iostream>
#include "Auxiliary.h"

int partitioning(int array[], int bottom, int top)
{
	// Getting pivot index and saving pivot value for later comparison
	int pivotIndex = (bottom + top) / 2;
	int pivot = array[pivotIndex];

	// Swaping pivot into first place of the array
	customSwap(array[bottom], array[pivotIndex]);

	// Defining borderIndex, starts out index 0 of current partition
	int borderIndex = bottom;

	// Iterating over array
	for (int i = bottom; i < top + 1; i++)
	{
		// When pivot bigger than current item...
		if (array[i] < pivot)
		{
			// Incrementing border index
			borderIndex++;
			// Border and item trade place
			customSwap(array[i], array[borderIndex]);
		}
	}

	// Returning border index for partitioning in next recursion
	return borderIndex;
}

void quickSort(int array[], int bottom, int top)
{
	// Checking if lower item in treated partition is smaller than upper item
	if (bottom < top)
	{
		// Retrieving border index
		int borderIndex = partitioning(array, bottom, top);
		// Swaping pivot and border
		customSwap(array[bottom], array[borderIndex]);

		// Recursively calling quickSort function for partitions
		quickSort(array, bottom, borderIndex - 1);
		quickSort(array, borderIndex + 1, top);
	}
}