#include <stdio.h>
/**
 *main - main code block
 *
 *Return: prints a to z in lower characters without 'q' and 'e'
 */

int main(void)
{
	char letter = 'a';

	for (; letter <= 'z'; letter++)
	{

	if (letter == 'e' || letter == 'q')
	continue;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
