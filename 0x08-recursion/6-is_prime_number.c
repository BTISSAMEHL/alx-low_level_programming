#include "main.h"
/**
 * is_prime_number - a function that returns 1
 * if the input integer is a prime number
 * otherwise return 0
 * @n: input
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int f = 1;
	int i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			f = 0;
			break;
		}
	}
	if (f)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
