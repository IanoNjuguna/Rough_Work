#include <stdio.h>

/**
 * add - adds two integers and returns the result
 *
 * @j: First integer value
 * @i: Second integer value
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int add(int i, int j)
{
	int x = i + j;

	return (x);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}

