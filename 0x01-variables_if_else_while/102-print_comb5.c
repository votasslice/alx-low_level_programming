#include <stdio.h>
/**
 * main - prints all possible combination of
 * two two-digit numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0, num1 <= 98; num1++)
	{
		f0r (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 98 && num2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
