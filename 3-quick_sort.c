#include "sort.h"
#include <stdio.h>

/**
 * @brief
 *
 * @param array
 * @param lo
 * @param hi
 * @return int
 */
int partition(int *array, long lo, long hi, size_t size)
{
	long i, j;
	int tmp, pivot;

	pivot = array[hi];
	i = lo - 1;
	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}
	i++;
	tmp = array[i];
	array[i] = array[hi];
	array[hi] = tmp;
	print_array(array, size);

	return (i);
}

/**
 * @brief
 *
 * @param array
 * @param lo
 * @param hi
 */
void lomuto_q_sort(int *array, long lo, long hi, size_t size)
{
	int p;

	p = 0;
	if (lo >= hi || lo < 0)
		return;

	p = partition(array, lo, hi, size);

	lomuto_q_sort(array, lo, p - 1, size);
	lomuto_q_sort(array, p + 1, hi, size);
}

/**
 * quick_sort - ...
 *
 * @array: ...
 * @size: ...
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;

	lomuto_q_sort(array, 0, size - 1, size);
}
