#include "main.h"
/**
 * reset_to_98 - a function that updates the value it points to 98
 * @n: pointer input
 * Return: pointer
 */
void reset_to_98(int *n)
{
	int *p = &n;

	*p = 98;
}
