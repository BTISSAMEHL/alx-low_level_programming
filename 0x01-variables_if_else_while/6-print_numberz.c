#include <stdio.h>

/**
 * main - a program that prints all single digit numbers of base 10
 * you can only use the putchar function
 * Return: 0 (success)
 */

int main(void)
{
	int nbr = 0;

	for (; nbr < 10; nbr++)
	{
		putchar('0' + nbr);
	}
	putchar('\n');
	return (0);
}
