#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: function that writes alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a' ; l <= 'z' ; l++)
	{
		_putchar(l);
	}
		_putchar('\n');
}
