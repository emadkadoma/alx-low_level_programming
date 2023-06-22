#include "main.h"
/**
 * more_numbers - more numbers
 *
 * Return: no return
 */
void more_numbers(void)
{
	int n, l;

	for (n = 0; n < 10; n++)
	{
		for (l = 0; l < 15; l++)
		{
			if (l > 9)
			{
				_putchar('1');
				_putchar(l % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
