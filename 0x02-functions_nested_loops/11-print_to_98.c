#include <stdio.h>
#include "main.h"
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
	int entry;

	if (n > 98)
	{
		for (entry = n ; entry > 98 ; entry--)
		{
			printf("%d, ", entry);
		}
	}
	else
	{
		for (entry = n ; entry < 98 ; entry++)
		{
			printf("%d, ", entry);
		}
	}
	printf("98\n");
}

