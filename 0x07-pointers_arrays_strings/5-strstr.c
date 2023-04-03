#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: input
 * @needle: input
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack)
	{
		if (*haystack == *needle)
			return (needle);
		return (NULL);
		i++;
	}
	return (0);
}
