#include <stdio.h>

/**
 * main - program that print the alphabet in lowercase and then in uppercase
 * you can only use putchar
 * Return: 0 (success)
 */

int main(void)
{
	int l = 'a';
	int u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
