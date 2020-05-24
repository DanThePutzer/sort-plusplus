#include <iostream>
#include "Auxiliary.h"

void quickSort(int array[], int size)
{
	customSwap(&array[size / 2], &array[size - 1]);
	int pivot = array[size - 1];

	int indexLeft = 0;
	int indexRight = size - 1;

	int* itemFromLeft = &array[0];
	int* itemFromRight = &array[size - 1];

	while (indexLeft < indexRight)
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (array[i] > pivot)
			{
				itemFromLeft = &array[i];
				break;
			}

			indexLeft++;
		}

		for (int i = size - 1; i > 0; i--)
		{
			if (array[i] < pivot)
			{
				itemFromRight = &array[i];
				break;
			}

			indexRight--;
		}

		customSwap(itemFromLeft, itemFromRight);
	}
	

};