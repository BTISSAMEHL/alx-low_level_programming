#include <stdio.h>

/**
 * main - a progra that prints the lowercase alphabet in reverse
 * you can only use the putchar function
 * Return: 0 (success)
 */

int main(void)
{
	int l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
