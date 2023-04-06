#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @index: index of the bit
 * @n: pointer to the number to set value to 0
 * Return: 1 for success and -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
