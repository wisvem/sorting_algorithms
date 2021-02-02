#include "sort.h"

/**
* shell_sort - shell sort algorithm
* @array: array to sort
* @size: array size
**/
void shell_sort(int *array, size_t size)
{
	size_t h = 1, i, n;
	int number, sw;

	if (!size || !array)
		return;
	while (h < size / 3)
	{
		h = 3 * h + 1;
	}
	while (h > 0)
	{
		sw = 0;
		for (i = h; i < size; i++)
		{
			number = array[i];
			for (n = i; n > h - 1 && array[n - h] > number; n = n - h)
			{
				array[n] = array[n - h];
				sw = 1;
			}
			array[n] = number;
		}
		h = (h - 1) / 3;
		if (sw == 1)
			print_array(array, size);
	}
}
