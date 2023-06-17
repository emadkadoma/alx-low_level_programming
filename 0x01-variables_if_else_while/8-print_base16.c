#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: writting base 16 single characters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;
	char letter;

	n = 0;
	letter = 'a';

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
