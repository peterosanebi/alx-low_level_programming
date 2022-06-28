#include <stdio.h>
/**
 * main - main code block
 *
 * @argc: number of arguments
 * @argv: vector of strings of arguments
 *
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argc;
	(void)argv;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
