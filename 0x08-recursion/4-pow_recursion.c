#include "main.h"
/**
 * _pow_recursion - main code block
 *
 *
 * @x: base
 * @y: pow
 *
 * Return: n
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		y--;
		x = x * _pow_recursion(x, y);
		return (x);
	}

	return (0);
}
