#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: compination of single numbers
 *
 * every number followed by ,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 0;

	while (n < 10)
	{
		putchar(n);
		putchar(' ');
		putchar(',');
		n++;
	}
	putchar('\n');
	return (0);
}
