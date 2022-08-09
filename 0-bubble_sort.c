#include "sort.h"

/**
 *bubble_sort - Sorts an array of integers using the buble sort algorithm
 *@array: The array to be sorted
 *@size: The size of the array.
 *Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	unsigned int i, n = size, newn = size;

	while (n > 1)
	{
		newn = 0;
		for (i = 1; i < n; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				print_array(array, size);
				newn = i;
			}
		}
		n = newn;
	}
}
