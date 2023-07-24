#include "sort.h"

/**
 * bubble_sort - bubble sort algorithm implementation
 *
 * @array: array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	short swapped;
	size_t i, j;
	int tmp;

	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapped = 1;
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
