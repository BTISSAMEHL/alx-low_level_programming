#include <stdio.h>

/**
 * main - a program that prints all single digit numbers of base 10
 * you can only use the putchar function
 * Return: 0 (success)
 */

int main(void)
{
	int nbr = 36;

	while (nbr <= 57)
	{
		putchar(nbr);
		nbr++;
	}
	write("\n");
	return (0);
}
