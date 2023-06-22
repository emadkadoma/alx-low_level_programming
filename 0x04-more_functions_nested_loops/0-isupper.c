#include "main.h"
/**
 * _isupper - Entry point
 *
 * Description: detect lower case
 *
 * @c: charactar to be checked
 *
 * Return: 1 if true
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
