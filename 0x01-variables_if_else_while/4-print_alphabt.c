#include <stdio.h>

/**
 * main - a program that print all the letters except q and e
 * you can only use the putchar
 * Return: 0 (success)
 */

int main(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		if (l == 'e' || l == 'q')
		{
			l++;
		}
		else
		{
			putchar(l);
			l++;
		}
	}
	putchar('\n');
	return (0);
}
