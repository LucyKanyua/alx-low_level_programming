#include <stdlib.h>
#include <stdio.h>
/**
 * main - print number from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 prints Buzz instead of number
 * 3 & 5 print FizzBuzz
 * Return: Always 0
 */
int main(void)
{
int i;
char f[] = "Fuzz";
char b[] = "Buzz";
char fb[] = "FuzzBuzz";
for (i = 1; i <= 100; i++)
{
	if (i == 100)
		printf("%s", b);
	else if ((i % 3 == 0) && (i % 5 == 0))
		printf("%s ", fb);
	else if ((i % 3 == 0)
			printf("%s ", b);
			else if (i % 5 == 0)
			printf("%s ", b);
			else
			printf("%d ", i);
			}
			printf("\n");
			return (0);
}
