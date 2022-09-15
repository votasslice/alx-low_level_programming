#include <stdio.h>

/**
 * main -Prints the alphabet in lowercase letters, except for e and q
 *
 * Return: 0 Always
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	}
	putchar('\n');

	return (0);
}
