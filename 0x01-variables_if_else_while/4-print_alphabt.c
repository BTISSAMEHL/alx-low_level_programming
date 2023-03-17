#include <stdio.h>

/**
 * main - a program that print all the letters except q and e
 * you can only use the putchar
 * Return: 0 (success)
 */

int main(void)
{
	int l = 'a';
	int u = 'f';
	int lu = 'r';

	while (l <= 'd')
	{
		putchar(l);
		l++;
	}
	while (u <= 'p')
	{
		putchar(u);
		u++;
	}
	while (lu <= 'z')
	{
		putchar(lu);
		lu++;
	}
	putchar('\n');
	return (0);
}
