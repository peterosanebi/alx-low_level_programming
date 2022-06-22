#include "main.h"
/**
 * is_prime - main code block
 * @x: num 1
 * @y: num 2
 * Return: 0 if num is not prime 1 if num is prime
 */
int is_prime(int x, int y)
{
	if ((x % y) == 0 && y < x)
		return (0);
	if (x == y)
		return (1);
	else
		return (is_prime(x, y + 1));
}
/**
 * is_prime_number - prime number checker
 * @n: number to be checked
 * Return: 0 if num is not prime and 1 if num is prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
