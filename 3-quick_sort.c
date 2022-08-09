#include "sort.h"

/**
 *quick_sort - Sorts an array using the quick sort algorithm
 *
 *@array: The array to be sorted
 *@size: The size of array
 *Return: void
 */
void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, (int)size, size);
}

/**
 *quickSort - Recursive function for quick sort algorithm
 *
 *@hi: The hi of current partition
 *@lo: The lo of current partition
 *@array: The array current partition of array.
 *Return: void
 */
void quickSort(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo >= hi || lo < 0)
		return;
	p = partition(array, lo, hi);
	print_array(array, size);
	quickSort(array, lo, p - 1, size);
	quickSort(array, p + 1, hi, size);
}

/**
 *partition - Partitions the array and swaps items into their right places
 *
 *@hi: The hi of current partition
 *@lo: The lo of current partition
 *@array: array to be sorted
 *Return: void
 */
int partition(int *array, int lo, int hi)
{
	int pivot, i, j, temp;


	pivot = array[hi];
	i = lo - 1;

	for (j = lo; j <= hi - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
		}
	}
	i++;
	temp = array[hi];
	array[hi] = array[i];
	array[i] = temp;
	return i;
}
