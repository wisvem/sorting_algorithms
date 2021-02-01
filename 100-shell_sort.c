#include "sort.h"

/**
* shell_sort - shell sort algorithm
* @array: array to sort
* @size: array size
**/
void shell_sort(int *array, size_t size)
{
	size_t h = 1, i, n;
	int number;

	if (!size)
		return;
	while (h < size / 3)
	{
		h = 3 * h + 1;
	}
	while (h > 0)
	{
		for (i = h; i < size; i += h)
		{
			for (n = i; n > 0 && array[n] < array[n - h]; n -= h)
			{
				number = array[n];
				array[n] = array[n - h];
				array[n - h] = number;
			}
		}
		h = (h - 1) / 3;
		print_array(array, size);
	}
}
