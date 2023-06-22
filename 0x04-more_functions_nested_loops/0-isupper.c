#include "main.h"
/**
 * _isupper - Entry point
 *
 * Description: detect upper case
 *
 * @c: charactar to be checked
 *
 * Return: 1 if true
 */
int _isupper(int c)
{
	c = 'A';

	if (c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
