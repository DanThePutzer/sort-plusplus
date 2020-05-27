#include "Header/Auxiliary.h"

void bubbleSort(int array[], int size)
{
	// Performing comparison for each single item in list
	for (int i = 1; i < size; i++)
	{
		// Comparing item i to each other item in the list
		for (int j = 0; j < size - 1; j++)
		{
			// If item bigger than the item compared to...
			if (array[j] < array[j + 1])
			{
				// ...swap places
				customSwap(array[j], array[j + 1]);
			}
		}
	}
}