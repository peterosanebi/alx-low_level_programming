#include "main.h"
#include <stdlib.h>
/**
 * *array_range - main code block
 * @min: min range of values stored
 * @max: max range of values stored
 * and num of elements
 * Return: point to array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
	{
		*(arr + j) = i;
	}
	return (arr);
}
