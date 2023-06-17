#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: alphabet reversed
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
