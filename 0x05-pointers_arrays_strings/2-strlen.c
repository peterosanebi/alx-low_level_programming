#include "main.h"
/**
 * _strlen - main code block
 *
 * @s: pointer of s
 *
 * Return: return length of strength
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
