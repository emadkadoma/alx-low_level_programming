#include "main.h"
/**
 * times_table - Entry point
 *
 * Description: times
 *
 * Return: 0 (success)
 */
void times_table(void)
{
	int n;
	int m;
	int result;

	for (n = 0 ; n <= 9 ; n++)
	{
		_putchar(48);
		for (m = 1 ; m <= 9 ; m++)
		{
			_putchar(',');
			_putchar(' ');
			result = n * m;
			if (result <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
