#include "main.h"
/**
 * _strcmp - main code block
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: compare string 1 and string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == 0)
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
