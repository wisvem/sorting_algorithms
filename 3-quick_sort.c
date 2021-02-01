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

	if (mySize == 0)
		mySize = size;
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
		
		quick_sort(array + j, size - j);
		if (j)
		{
			quick_sort(array, j);
			print_array(array + j, mySize);
		}
	}
}
