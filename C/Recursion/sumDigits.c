#include <stdio.h>

/**
 * sumDigits - return the sum of all of the digits in a given integer value
 *
 * @num: given integer value
 * Return: return the sum of all of the digits in a given integer value
 */
unsigned int sumDigits(int num)
{
	if (num == 0)
	{
		return (0);
	}

	return (num % 10 + sumDigits(num / 10));
}

/**
 * main - Test sumDigits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%u\n", sumDigits(622));

	return (0);
}

