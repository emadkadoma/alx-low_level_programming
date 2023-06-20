#include "main.h"
/**
 * print_sign - Entry point
 *
 * Description: print sign
 *
 * @n: charactar to be checked
 *
 * Return: + if positive
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
