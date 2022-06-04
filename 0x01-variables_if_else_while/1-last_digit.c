#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - main block
 *Return: return s the last digit
 */
int main(void)
{
	int n, lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastnum = n % 10;
	if (lastnum > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);
	else if (lastnum < 6 && != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);
	else
		printf("Last digit of %d is %d and is 0\n", n, lastnum);
	return (0);
}
