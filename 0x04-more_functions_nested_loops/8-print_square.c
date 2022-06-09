#include "main.h"
/**
 * print_square - main code block
 *
 * @size: value for size of square
 *
 * Return: print the square
 */
void print_square(int size)
{
	int rows = size;
	int orSize = size;

	if (size > 0)
	{
		while (size--)
		{
			while (rows--)
			{
				_putchar(35);
			}
			_putchar(10);
			rows = orSize;
		}
	}
	else
		_putchar(10);
}
