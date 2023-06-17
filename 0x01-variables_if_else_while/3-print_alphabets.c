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
	char cha;

	ch = 'a';
	cha = 'A';

	while (ch <= 'z')
	{putchar(ch);
		ch++;
	}
	while (cha <= 'Z')
	{putchar(cha);
		cha++;
	}
	putchar('\n');
	return (0);
}
