#include "main.h"
/**
 * _islower - Entry point
 *
 * Description: detect lower case
 *
 * Return: 1 if true
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
