#include <stdio.h>
void modif_my_param(int m);

/**
 * modif_my_param - this function does not modify m
 * @m: a useless integer
 *
 * Return: nothing
 */
void modif_my_param(int m)
{
	m = 402;

	m += 2;
}

/**
 * main - parameters are passed by value
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 98;

	modif_my_param(n);

	printf("Value of 'n': %d\n", n);
	return (0);
}

