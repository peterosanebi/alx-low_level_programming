#include "main.h"
/**
 *print_alphabet_10 - printing a to z x10
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int n = 10;

	while (n >= 1)
	{
		while (a <= 'z')
		{
			_putchar(a);
			++a;
		}
		--n;
		_putchar(10);
		a = 'a';
	}
}
