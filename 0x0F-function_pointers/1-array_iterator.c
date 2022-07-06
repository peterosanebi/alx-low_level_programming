#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - main code block
 *
 * @array: array with parameters
 * @size: size of array
 * @action: function as a parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
