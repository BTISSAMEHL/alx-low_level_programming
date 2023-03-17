#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase
 * you can only use the putchar function
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int l = 'a';

	for (n = 0; n < 10; n++)
		putchar('0' + n);
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
