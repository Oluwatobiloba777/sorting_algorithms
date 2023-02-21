#include "sort.h"

/**
 * bubble_sort - the bubble sort algorithm
 * @array:array pointer
 * @size:size of the array
 *
 * Return: Null Void
 */
 void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1 ; j++)
		{
			if (array[j] > array[j + 1])
			{
				k = array[j];
				array[j] = array[j + 1];
				array[j + 1] = k;
				print_array(array, size);
			}
		}

	}
}
