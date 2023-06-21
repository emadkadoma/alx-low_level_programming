#include <stdio.h>
include "main.h"
/**
 * print_to_98 - Entry point
 *
 * Description: times
 *
 *@n: natural number
 *
 * Return: 0 (success)
 */
void print_to_98(int n)
{
	for (n ; n >= 98 ; n--)
	{
		if (n > 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	for (n ; n <= 98 ; n++)
	{
		if (n < 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
