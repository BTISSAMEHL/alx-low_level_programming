#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int n = 'a';
	int i = 0;

	for (i = 0; i <= 10; i++)
	{
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
	}
	_putchar('\n');
}
