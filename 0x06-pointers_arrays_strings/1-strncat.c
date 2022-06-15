#include "main.h"
/**
 * _strncat - main code block
 *
 * @dest: string a
 * @src:  string b
 * @n: number of bytes of str to concatenate
 *
 * Return: pointer to the concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (y < n && src[y] != 0)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = 0;
	return (dest);
}
