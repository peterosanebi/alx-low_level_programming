#include <stdio.h>
/**
 *main - main code block
 *
 *Return: printing from 0 to 9 only once
 */

int main(void)
{
	int n;
	int l;

	for (n = '0'; n <= '9'; n++)
	{
		for (l = '1'; l <= '9'; l++)
		{
			if (l > n)
			{
				putchar(n);
				putchar(l);
				if (n < '9')
				{
					if (n == '8' && l == '9')
					{
						continue;
					}
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
