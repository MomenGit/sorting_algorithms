#include "sort.h"

/**
 * bubble_sort - bubble sort algorithm implementation
 *
 * @array: array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	short swap;
	size_t i, j;
	int tmp;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		swap = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap = 1;
				/*array[j] ^= array[j + 1] ^= array[j] ^= array[j + 1];*/
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
		if (swap == 0)
			break;
	}
}
