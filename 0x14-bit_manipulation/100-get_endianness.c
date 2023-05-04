#include <stdint.h>
#include "main.h"
/**
 * get_endianness - a function that checks the endianness
 * Return: 0 if big endian, 1 for little endian
 */
int get_endianness(void)
{
	int check = 1;

	return (*(char *)&check == 1);
}
