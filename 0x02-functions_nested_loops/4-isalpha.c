#include "main.h"
/**
 * _isalpha - Entry point
 *
 * Description: detect lower case
 *
 * @c: charactar to be checked
 *
 * Return: 1 if true
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
