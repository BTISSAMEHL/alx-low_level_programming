#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: string input
 * Return: reverse string
 */
void rev_string(char *s)
{
	int l = 0;
	int r;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (r = l; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
