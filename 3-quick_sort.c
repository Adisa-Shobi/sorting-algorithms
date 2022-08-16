#include "sort.h"
#include <stdio.h>

/**
 *quick_sort - Sorts an array using the quick sort algorithm
 *
 *@array: The array to be sorted
 *@size: The size of array
 *Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size || !*array)
		return;
	quickSort(array, size, 0, (int)size - 1);
}

/**
 *quickSort - Recursive function for quick sort algorithm
 *
 *@hi: The hi of current partition
 *@lo: The lo of current partition
 *@array: The array current partition of array.
 *@size: The size of the original array.
 *Return: void
 */
void quickSort(int *array, size_t size, int lo, int hi)
{
	int p;

	if (lo >= hi || lo < 0)
		return;
	p = partition(array, size, lo, hi);
	quickSort(array, size, lo, p - 1);
	quickSort(array, size, p + 1, hi);
}

/**
 *partition - Partitions the array and swaps items into their right places
 *
 *@hi: The hi of current partition
 *@lo: The lo of current partition
 *@array: array to be sorted
 *@size: The size of the original array.
 *Return: void
 */
int partition(int *array, size_t size, int lo, int hi)
{
	int pivot, i, j;


	pivot = array[hi];
	i = lo - 1;

	for (j = lo; j <= hi - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(array, size, i, j);
		}
	}
	i++;
	swap(array, size, hi, i);
	return (i);
}

/**
 *swap - swaps the position of two array items
 *
 *@array: The array to be swapped
 *@i: First index
 *@j: second index
 *@size: The size of the array.
 *Return: void
 */
void swap(int *array, size_t size, int i, int j)
{
	int temp;

	if ((array + i) != (array + j))
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		print_array(array, size);
	}
}
