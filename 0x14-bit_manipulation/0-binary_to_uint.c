#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int p = 0;

	if (b == NULL)
		return (0);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] == '0' && b[j] != '1')
			return (0);
		p = p << 1;
		if (b[j] == '1')
			p = p | 1;
	}
	return (p);
}
