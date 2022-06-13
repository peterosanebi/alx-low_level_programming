#include "main.h"
/**
 * print_rev - main code block
 *
 * @s: pointer of s
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	while (length > 0)
		_putchar(s[--length]);
	_putchar(10);
}
