#include <iostream>
#include <chrono>

#include "Header/SortFunctions.h"
#include "Header/Auxiliary.h"

int main() {
	// Test Array
	int test[9] = {10, 4, 8, 2, 3, 7, 17, 100, 5};

	// Calling quickSort function
	//quickSort(test, 0, 8);

	// Calling bubbleSort function
	//bubbleSort(test, 9);

	// Calling bubbleSort function
	mergeSort(test, 0, 8);

	// Logging inplace-sorted array
	logArray(test, 9);
}