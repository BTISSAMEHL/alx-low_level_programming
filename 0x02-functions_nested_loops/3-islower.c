#include "main.h"
/**
 * islower - a function that checks for lowercase character
 * Return: 1 if the character is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
