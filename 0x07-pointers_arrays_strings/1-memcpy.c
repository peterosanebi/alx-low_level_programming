#include "main.h"
/**
 * *_memcpy - main code block
 *
 * @dest: dest mem area
 * @src: mem area to copy
 * @n: num of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(dest + x) = *(src + x);
	}
	return (dest);
}
