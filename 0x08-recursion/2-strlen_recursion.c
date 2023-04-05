#include "main.h"
/**
 * _strlen_recursion - a function that return the length of a string
 * @s: input
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
