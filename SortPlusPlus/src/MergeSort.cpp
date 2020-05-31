#include "Header/Auxiliary.h"

#include <iostream>

void merging(int array[], int bottom, int middle, int top)
{
	int indexLeft = bottom;
	int indexRight = middle;

	while (indexLeft < middle && indexRight < top)
	{
		if (array[indexLeft] < array[indexRight])
		{
			indexLeft++;
		}
		else
		{
			int temp = array[indexRight];

			for (int i = indexLeft + 1; i < indexRight; i++)
			{
				array[i] = array[i + 1];
			}

			array[indexLeft + 1] = temp;
			indexRight++;
		}
	}
}

void mergeSort(int array[], int bottom, int top)
{
	if (bottom < top)
	{
		int middle = (bottom + top) / 2;

		mergeSort(array, bottom, middle);
		mergeSort(array, middle + 1, top);

		merging(array, bottom, middle, top);
	}
}