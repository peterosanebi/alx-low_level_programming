#include "main.h"
/**
 * _isupper - function
 *
 * @c:value being checked for
 *
 * Return: return 1 if c is a digit else return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
