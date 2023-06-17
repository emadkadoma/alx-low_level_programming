#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: alphabet exept q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' || ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');

	return (0);
}
