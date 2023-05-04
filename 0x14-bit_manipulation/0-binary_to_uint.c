#include "main.h"
#include <unistd.h>
/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: binary to be converted
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j = 0;
	unsigned int count = 0;

	if (b == NULL)
		return (0);
	for (; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);

		count = count << 1;

		if (b[j] == '1')
			count = count | 1;
	}
	return (count);
}
