#include "main.h"
/**
 * _memset - main code block
 *
 * @n: buffer size
 * @s: bytes of memory area
 * @b: constant byte
 *
 * Return: pointer of memory area (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
