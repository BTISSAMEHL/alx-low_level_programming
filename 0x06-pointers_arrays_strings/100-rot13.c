#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13
 * @a: input value
 * Return: a
 */
char *rot13(char *a)
{
	int i, j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxzabcdefghijklm";

	i = 0;
	while (a[i] != '\0')
	{
		for (j = 0; j < 52; j++)
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
