#include "sort.h"

/**
 * bubble_sort - this function sorts an array of integers in ascending order.
 * @array: count element integer
 * @size: size of the array
 **/
void bubble_sort(int *array, size_t size)
{
	size_t i, j,
        int aux;

	if (size < 2 || !array)
	  return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(aux, size);
			}
		}

	}
}
