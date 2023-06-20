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

	for (l = 0; l < 11; l++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
