#include "sort.h"
/**
* quick_sort - quick sort algorithm
* @array: array to sort
* @size: array size
**/
void quick_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int x, pv;

	if (size > 1)
	{
		pv = array[size - 1];

		while (i < size)
		{
			if (array[i] < pv)
			{
				x = array[i];
				array[i] = array[j];
				array[j] = x;
				j++;
			}
			i++;
		}
		x = array[j];
		array[j] = array[size - 1];
		array[size - 1] = x;

		if (size < sizeof(array))
		{
			/*printf("Size of array: %lu\n", sizeof(array));*/
			print_array(array-size-2, sizeof(array));
		}

		quick_sort(array + j, size - j);

		if (j)
		{
			quick_sort(array, j);
		}
	}
}
