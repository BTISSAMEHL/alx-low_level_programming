#include "main.h"
/**
 * _memset - a function thats fills memory with a constant byte
 * @s: input
 * @b: input
 * @n: input
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (s && n > 0)
	{
		*s = b;
		s++;
		n--;
		i++;
	}
	return (s);
}
