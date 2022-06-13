#include "main.h"
/**
 * _puts - main code block
 *
 * @str: pointer of str
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
