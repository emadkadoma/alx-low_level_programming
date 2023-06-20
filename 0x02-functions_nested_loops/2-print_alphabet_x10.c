#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: function that writes alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char l;
	int k;

	for (k = 0; k < 10; k++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
