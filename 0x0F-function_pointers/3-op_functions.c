#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - returns sum of two numbers
 * @a: the first number
 * @b: the second number
 * Return: sum of a and b
 */
int op_add(int a, in b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul -returns the product of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the division of two numbers
 * @: the first number
 * @b: the second number
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of the division of two numbers
 * @: the first number
 * @b: the second number
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
