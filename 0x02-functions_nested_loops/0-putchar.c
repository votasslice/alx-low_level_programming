#include "main.h"

/**
 * main - This is to print using printchar
 *
 * Return: 0 Always
 */

int main(void)
{
	char text[] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
