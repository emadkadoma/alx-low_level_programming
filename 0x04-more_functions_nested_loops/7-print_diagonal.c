#include "main.h"
/**
 * print_diagonal - printing lines diagonal
 * @n: input variable
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
