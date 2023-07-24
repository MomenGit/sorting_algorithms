#include "sort.h"

/**
 * selection_sort - selection sort implementation
 *
 * @array: array to be sorted
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, s_idx;
	int smaller;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		smaller = array[i];
		s_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (smaller > array[j])
			{
				smaller = array[j];
				s_idx = j;
			}
		}
		if (s_idx != i)
		{
			array[s_idx] = array[i];
			array[i] = smaller;
			print_array(array, size);
		}
	}
}
