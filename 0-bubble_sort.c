#include "sort.h"

/**
* bubble_sort - bubble sort function
* @array: array to sort
* @size: arraya size
**/
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int x, sw = 0;

	if (!size)
		return;
	while (sw == 0)
	{
		sw = 1;
		while (i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				x = array[i];
				array[i] = array[i + 1];
				array[i + 1] = x;
				sw = 0;
				print_array(array, size);
			}
			i++;
		}
		if (sw == 0)
		{
			i = 0;
		}
	}
}
