#include "sort.h"

/**
 *selection_sort - Sorts an array using selection sort
 *
 *@size: The size of the array
 *@array: The array to be sorted
 *Return: void
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_j;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min_j = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_j])
				min_j = j;
		}
		if (min_j != i)
		{
			temp = array[i];
			array[i] = array[min_j];
			array[min_j] = temp;
			print_array(array, size);
		}
	}
}
