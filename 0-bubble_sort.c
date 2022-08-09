#include "sort.h"

/**
 *bubble_sort - Sorts an array of integers using the buble sort algorithm
 *@array: The array to be sorted
 *@size: The size of the array.
 *Return: void
 */
void bubble_sort(int *array, size_t size)
{
	bool swapped = true;
	int temp;
	unsigned int i, n = size;

	while (swapped)
	{
		swapped = false;
		for (i = 1; i < n; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				swapped = true;
				print_array(array, size);
			}
		}
		n--;
	}
}
