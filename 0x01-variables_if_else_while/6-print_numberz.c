#include <stdio.h>
/**
 * main - main code block
 *
 *Return: returns all number from 0  to 9
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
