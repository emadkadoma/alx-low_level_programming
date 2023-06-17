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

	n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	while (n <= 'f' && n >= 'a')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
