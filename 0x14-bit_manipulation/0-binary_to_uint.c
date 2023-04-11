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
	unsigned int val = 0;

	if (b == NULL)
		return (0);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] == '0')
			val = val * 2;
		else if (b[j] == '1')
			val = val * 2 + 1;
		else
			return (0);
	}
	return (val);
}
