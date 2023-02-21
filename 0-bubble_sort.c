#include "sort.h"

/**
 * bubble_sort - the bubble sort algorithm
 * @array:array pointer
 * @size:size of the array
 *
 * Return:ir returns null Void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;

<<<<<<< HEAD
	for (i = 0; i < size; i++)
=======

	for (i = 0; i < size - 1; i++)

	for (i = 0; i < size; i++)

>>>>>>> 278eebbee81b1912df6524876f69fbe5e282e73f
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
<<<<<<< HEAD

=======
>>>>>>> 278eebbee81b1912df6524876f69fbe5e282e73f
	}
}
