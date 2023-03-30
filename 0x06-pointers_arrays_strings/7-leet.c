#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @a: input
 * Return: a string into 1337
 */
char *leet(char *a)
{
	int i;
	int j;
	char s1[] = "aAeEoOtTlT";
	char s2[] = "4433007711";

	i = 0;
	while (a[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == s1[j])
			{
				a[i] = s2[j];
			}
		}
		i++;
	}
	return (a);
}
