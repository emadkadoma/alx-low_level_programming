#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: function that writes alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
