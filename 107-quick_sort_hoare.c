#include "sort.h"

size_t part(int *array, size_t l, size_t h)
{
	size_t i = l - 1, j = h + 1;
	int x, pv;

	pv = array[h];

	pv = array[h - 1];
	do
		i++;
	while (array[i] < pv);
	do
		j--;
	while (array[j] > pv);
	if (i <= j)
		return (j);
	x = array[i];
	array[i] = array[j];
	array[j] = x;
}

void q_sort(int *array, size_t l, size_t h)
{
	size_t p = 0;

	if (l < h)
	{
		p = part(array, l, h);
		printf("%lu\n", p);
		q_sort(array, l, p);
		q_sort(array, p + 1, h);
	}
}
void quick_sort_hoare(int *array, size_t size)
{
	q_sort(array, 0, size);
}
