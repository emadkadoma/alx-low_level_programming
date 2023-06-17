#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: if the last digitis less than 5 will print greater
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

if (digit > 5)
{printf("Last digit of %d is %d and is greater than 5\n", n, digit);
}
else if (digit < 5 && digit != 0)
{printf("Last digit of %d is %d and is less than %d and not 0\n", n, digit, 5);
}
else if (digit == 0)
{printf("Last digit of %d is %d and is 0\n", n, digit); }
	return (0);
}
