#include "main.h"
/**
 * _strcat - main code block
 *
 * @dest: string a
 * @src: string b
 *
 * Return: concatinate string a with string b
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
