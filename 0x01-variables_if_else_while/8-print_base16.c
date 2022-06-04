#include <stdio.h>
/**
 *main - main code block
 *
 *Return: printing from 0 to 9
 */

int main(void)
{
	int n;
	char l;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
