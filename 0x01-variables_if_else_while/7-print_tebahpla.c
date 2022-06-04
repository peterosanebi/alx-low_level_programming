#include <stdio.h>
/**
 *main - main code block
 *
 *Return: printing from 0 to 9
 */

int main(void)
{
	char num = 'z';

	while (num >= 'a')
	{
		putchar(num);
		num--;
	}
	putchar('\n');
	return (0);
}
