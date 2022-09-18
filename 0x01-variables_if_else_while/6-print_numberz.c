#include <stdio.h>

/**
 * main - Prints all single ditit numbers of base 10 staring from 0 using only putchar
 *
 * Return: Always 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar((digit % 10) + '0');

	putchar('\n');

	return (0);
}
