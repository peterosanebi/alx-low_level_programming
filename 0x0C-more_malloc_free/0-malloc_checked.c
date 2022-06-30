#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * *malloc_checked - main code block
 *
 * @b: parameter
 *
 * Return: a
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(sizeof(char) * b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
