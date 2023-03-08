#include <stdio.h>

/**
 * main - print the address of an array && the sizeof an array
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char b[98];

	printf("b: %p\n", (void *) b);
	printf("&b: %p\n", (void *) &b);
	printf("sizeof(b): %lu\n", sizeof(b));
	printf("sizeof(&b): %lu\n", sizeof(&b));

	return (0);
}

