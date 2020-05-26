#include <iostream>
#include "SortFunctions.h"
#include "Auxiliary.h"

int main() {
	// Test Array
	int test[9] = {10, 4, 8, 2, 3, 7, 17, 100, 5};

	// Calling quickSort function
	quickSort(test, 0, 8);

	// Logging inplace-sorted array
	logArray(test, 9);
}