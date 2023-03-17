#include <stdio.h>

/**
 * main - a program that prints all possible combinations of numbers
 * you can only use the putchar function
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar('0' + n + ',');
	putchar('\n');
	return (0);
}
