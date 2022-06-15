#include "main.h"
/**
 * _strncpy - main code block
 *
 * @dest: string a
 * @src:  string b
 * @n: number of bytes to copy
 *
 * Return: pointer to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
