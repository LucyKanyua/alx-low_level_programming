#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_prime_number - a function that returns 1
 * if the input integer is a prime number,
 * otherwise return 0
 */

/**
 * is_divisible - checks if a number is divisible
 * @num: the number to be checked
 * @div: the divisor
 * Return: if the number is divisible 0
 * if the number is not divisible return 1
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}
