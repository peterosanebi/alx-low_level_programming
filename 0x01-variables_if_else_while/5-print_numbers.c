#include <stdio.h>
/**
 *main - main code block
 *
 *Return: printing from 0 to 9
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
