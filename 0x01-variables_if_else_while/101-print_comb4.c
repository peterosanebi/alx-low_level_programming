#include <stdio.h>
/**
 *main - main code block
 *
 *Return: printing from 0 to 9 and removing triplicates
 */

int main(void)
{
	int n;
	int l;
	int p;

	for (n = '0'; n <= '9'; n++)
	{
		for (l = '1'; l <= '9'; l++)
		{
			if (l > n)
			{
				for (p = '2'; p <= '9'; p++)
				{
					if (p > l)
					{
						putchar(n);
						putchar(l);
						putchar(p);
						if (l < '9')
						{
							if (n == '7' && l == '8' && p == '9')
							{
								continue;
							}
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
