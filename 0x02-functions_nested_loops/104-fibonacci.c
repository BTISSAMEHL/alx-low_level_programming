#include <stdio.h>
/**
 * main - enter point
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib11, fib12, fib21, fib22;
	unsigned long h1, h2;

	for (i = 0; i < 92; i++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	fib11 = fib1 / 10000000000;
	fib21 = fib2 / 10000000000;
	fib12 = fib1 % 10000000000;
	fib22 = fib2 % 10000000000;
	for (i = 98; i < 99; i++)
	{
		h1 = fib11 + fib21;
		h2 = fib12 + fib22;
		if (fib12 + fib22 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (i != 98)
			printf(", ");
		fib11 = fib21;
		fib12 = fib22;
		fib21 = h1;
		fib22 = h2;
	}
	printf("\n");
	return (0);
}
