#include "sort.h"
#include <stdio.h>

/**
 *shell_sort - Sorts an array using the shell sort algorithm
 *
 *@array: An array of integers to be sorted.
 *@size: The size of the array
 *Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t n = 0, j, k;
	int i, temp;

	for (i = 0; n < size; i++)
		n = i * 3 + 1;
	i = ((n - 1) / 3) - 2;

	while (i >= 0)
	{
		n = i * 3 + 1;
		for (j = n; j < size; j++)
		{
			temp = array[j];
			for (k = j; (k >= n) && (array[k - n] > temp); k -= n)
				array[k] = array[k - n];
			array[k] = temp;
		}
		print_array(array, size);
		i--;
	}
}
