#include "main.h"
/**
 *_islower - islowerfunction
 *
 *Return: return 1 for uppercase or 0 for lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
