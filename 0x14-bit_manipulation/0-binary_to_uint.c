#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		dec = dec (<<) + (*b++ - '0');
	}
	return dec;
}
