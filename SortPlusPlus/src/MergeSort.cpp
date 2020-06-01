#include "Header/Auxiliary.h"

void merging(int array[], int bottom, int middle, int top)
{
	// Defining indices for looping over left and right partition of current fraction of array
	int indexLeft = bottom;
	int indexRight = middle + 1;

	// As long as the indices haven't reached the ends of their respective partitions, we keep looping
	while (indexLeft <= middle && indexRight <= top)
	{
		// If item at index in left partition is smaller than right, everything can stay as it is
		if (array[indexLeft] < array[indexRight])
		{
			// We switch to the next item in the left partition
			indexLeft++;
		}
		// If item at index in right partition is bigger:
		else
		{
			// We save the item at index in the right partition in a temporary variable
			int temp = array[indexRight];

			// We loop over all items between the current indices of the two partitions...
			for (int i = indexRight; i > indexLeft - 1; i--)
			{
				// ...and shift each item to the right by 1 position
				array[i] = array[i - 1];
			}

			// We then insert the item currently saved in the temporary (the item previously selected item in the right partition)
			// into the position of the previously selected item in the left partition
			// Since it is smaller than the selected item in the right partition, it is now in front of the left partition item,
			// right where it belongs
			array[indexLeft] = temp;

			// We increase both indices to go on to new items in both partitions
			indexLeft++;
			indexRight++;

			// We shift the middle as well since item at original middle value is now the last element
			// of the left partition due to the +1 shift in the for-loop above
			middle++;
		}
	}
}

void mergeSort(int array[], int bottom, int top)
{
	// Checking if lower item in current partition of array is smaller than upper item
	if (bottom < top)
	{
		// Calculating middle of current partition
		int middle = (bottom + top) / 2;

		// Recursively calling mergeSort function for both top and bottom partition
		mergeSort(array, bottom, middle);
		mergeSort(array, middle + 1, top);

		// "Merging" partitions by sorting the two halves back into the initial array in correct order
		merging(array, bottom, middle, top);
	}
}