#include <stdio.h>
/**
 *main - main code block
 *
 *Return: prints a to z in lower characters
 */

int main(void)
{
	char letter = 'a';
	char upper = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);

	}
