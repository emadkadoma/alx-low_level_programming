#include "main.h"
/**
 * print_square - prints a square of size size
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int n, d;
	
	if (size <= 0)
		_putchar('\n');
	for (d = 0; d < size; d++)
	{
		for (d = 0; d < size; d++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

