#include <stdio.h>

/**
 * main - print the address of an array
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char b[98];

	printf("b: %p\n", (void *) b);
	printf("&b: %p\n", (void *) &b);

	return (0);
}

