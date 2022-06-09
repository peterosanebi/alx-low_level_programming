#include "main.h"
/**
 * print_line - main code block
 *
 * @n: number of lines to be drawn
 *
 * Return: draw the line or print new line
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
			_putchar(95);
	}
	_putchar(10);
}
