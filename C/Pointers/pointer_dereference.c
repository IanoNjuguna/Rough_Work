#include <stdio.h>

/**
 * main - dereferencing pointers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", (void *) &n);
	printf("Value of 'p': %p\n", (void *) p);

	*p = 402;

	printf("Value of 'n': %d\n", n);

	return (0);
}

