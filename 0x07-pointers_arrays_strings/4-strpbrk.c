#include "main.h"
/**
 * _strpbrk - a function that locates the first occurrence in the string s
 * @s: input
 * @accept: input
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
