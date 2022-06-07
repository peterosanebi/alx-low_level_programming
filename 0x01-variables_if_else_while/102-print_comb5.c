#include <stdio.h>
/**
 *main - main code block
 *
 *Return: printing from 0 to 9
 */

int main(void)
{
	int n = 0, l = 0, p = 0, m = 0;

	int s = 1;

	while (n <= 9)
	{
		while (l <= 9)
		{
			while (p <= 9)
			{
				while (m <= 9)
				{
					if ((p * 10) + m) > (n * 10) + l))
					{
					if (s == 0)
					{
					putchar(44);
					putchar(32);
					}
					putchar(n + '0');
					putchar(l + '0');
					putchar(32);
					putchar(p + '0');
					putchar(m + '0');
					s = 0;
					}
				m++;
				}
			p++;
			m = 0;
			}
		l++;
		p = 0;
		}
	n++;
	l = 0;
	}
	putchar('\n');
	return (0);
	}
