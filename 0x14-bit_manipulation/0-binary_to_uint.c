#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to the string
 * Return: converted number
 * 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int j = 0;

	if (b == NULL)
		return (0);
	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		j = j << 1;

		if (b[i] == '1')
			j = j | 1;
	}
	return (j);
}
