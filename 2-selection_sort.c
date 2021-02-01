#include "sort.h"

/**
* selection_sort - selection sort
* @array: array to sort
* @size: array size
**/
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, pos;
	int x, sw = 0;

	if (!size)
		return;
	while (i < size - 1)
	{
		x = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (x > array[j])
			{
				x = array[j];
				pos = j;

				sw = 1;
			}
		}
		if (sw == 1)
		{
			sw = 0;
			array[pos] = array[i];
			array[i] = x;
			print_array(array, size);
		}

		i++;
	}
}
