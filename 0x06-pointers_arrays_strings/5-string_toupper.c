#include "main.h"
/**
 * string_toupper - main code block
 *
 * @s: string to change to uppercase
 *
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int x = 0;

	while (*(s + x))
	{
		if ((*(s + x) >= 97) &&  (*(s + x) <= 122))
			*(s + x) = *(s + x) - 32;
		x++;
	}
	return (s);
}
