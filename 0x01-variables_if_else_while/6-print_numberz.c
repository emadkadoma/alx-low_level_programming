#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print from 1 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		putchar(n);
		n++;
	}
	return (0);
}
