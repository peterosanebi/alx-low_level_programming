#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - main code block
 *
 * @array: array with parameters
 * @size: size of array
 * @cmp: function to call function
 *
 * Return: return the index of the 1st element
 * for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
