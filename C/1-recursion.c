#include <stdio.h>
/**
 * recurse - My first recursive function. Gets the factorial of an int
 *
 * @factorial: int
 * Return: factorial
 */
unsigned int recurse(int factorial)
{
	if (factorial == 1 || factorial == 0)
		return (1);

	return (factorial * recurse((factorial - 1)));
}

/**
 * main - Test the recursive function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%u\n", recurse(10));
	return (0);
}

