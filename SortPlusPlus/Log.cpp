#include <iostream>

void logInteger(int integer)
{
	std::cout << integer << std::endl;
	std::cin.get();
}

void logArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << std::endl;
	}

	std::cin.get();
}