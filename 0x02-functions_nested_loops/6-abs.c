#include "main.h"
/**
 * _abs - Entry point
 *
 * Description: calculate absulute value
 *@n: integer that takes the value
 *
 * Return: 0 if true
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = (-1) * n;
		return (n);
	}
}
