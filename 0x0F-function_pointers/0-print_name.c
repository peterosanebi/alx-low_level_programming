#include <stdio.h>
/**
 * print_name - main code block
 *
 * @name: Param 1
 * @f: param funct
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		if (name != NULL)
		{
			(*f)(name);
		}
	}
}
