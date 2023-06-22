#include "main.h"
/**
 * print_line - printing lines
 * @n: number of times
 *
 * Return: void
 */
void print_line(int n)
{
	int d;

	for (d = 0 ; d < n ; d++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
