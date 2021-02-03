#include "sort.h"

/**
* partition - hoare partiton scheme
* @array: array to sort
* @size: array size
* @low: first position subarray
* @high: last position subarray
* Return: partition position
**/
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low;
	int j = high;

	/*printf("j: %i pivot: %i array[j]%i\n", j, pivot, array[high]);*/
	while (1)
	{

		while (array[i] < pivot)
			i++;

		while (array[j] > pivot)
			j--;

		if (i >= j)
		{
			return (i);
		}

		array[i] = array[i] + array[j];
		array[j] = array[i] - array[j];
		array[i] = array[i] - array[j];
		print_array(array, size);

		i++;
		j--;
	}
}

/**
* qsorth - quick sort hoare
* @array: array to sort
* @size: array size
* @low: first position subarray
* @high: last position subarray
* Return: partition position
**/
void qsorth(int *array, int low, int high, size_t size)
{
	int pivot_position;
	/* base condition */

	if (low < high)
	{
		/* rearrange the elements across pivot */
		pivot_position = partition(array, low, high, size);

		/* recursion left to pivot*/
		/*	if (pivot_position) */
		qsorth(array, low, pivot_position - 1, size);

		/* recursion right to pivot */
		qsorth(array, pivot_position, high, size);
	}
}

/**
* quick_sort_hoare - quick sort algorithm
* @array: array to sort
* @size: array size
**/
void quick_sort_hoare(int *array, size_t size)
{
	if (size < 2 || array == NULL)
		return;
	qsorth(array, 0, size - 1, size);
}
