#include <stdio.h>
/**
 * main - FizzBuzz
 *
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 *
 * Return: always 0
 */
void main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (((n % 5) == 0) && ((n % 3) == 0))
			printf("fizzbuzz");
		else if ((n % 3) == 0)
			printf("fizz");
		else if ((n % 5) == 0)
			printf("buzz");
		else
			printf("%d", n);
		if (n < 100)
			printf(" ");
	}
	printf("\n");
}

