#include "sort.h"

/**
 * bubble_sort - orts an array of integers in ascending order
 * array: array
 * size: size of array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int i, j , temp = 0;

	if (array == NULL)
		return;
	for (i = 0; (size_t)i < (size - 1); i++)
	{
		for (j = 0; (size_t)j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
