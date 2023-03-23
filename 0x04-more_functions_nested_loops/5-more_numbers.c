#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * Return: 10 times 0 to 14
 */
void more_numbers(void)
{
	int i;
	int count = 0;

	while (count < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
			_putchar('\n');
		}
		count++;
	}
	_putchar('\n');
}
