#include <stdlib.h>
#include <time.h>
/**
 * function to determine
 * if number is positive or negative
 * description: less than zero is negative
 * more than zero is positive
 * return: 0 (sucess)
*/

int main(void)
{
	int n;
	int digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

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
