#include <stdio.h>

/**
 * main - a program that prints all possible combinations of numbers
 * you can only use the putchar function
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar((i % 10) + '0');
		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
