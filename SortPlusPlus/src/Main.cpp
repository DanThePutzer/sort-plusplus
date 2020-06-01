#include <iostream>
#include <chrono>

#include "Header/SortFunctions.h"
#include "Header/Auxiliary.h"

int main() {
	// Test Array
	int test[12] = {10, 4, 8, 2, 3, 7, 17, 100, 5, 2, 3, 25};

	// Calling quickSort function
	quickSort(test, 0, 11);

	// Calling bubbleSort function
	//bubbleSort(test, 12);

	// Calling bubbleSort function
	//mergeSort(test, 0, 11);

	// Logging inplace-sorted array
	logArray(test, 12);
}