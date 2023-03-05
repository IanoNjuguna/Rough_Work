#include <stdio.h>

/**
 * main - fooling around
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 98;
	int *p = &n;

/*	*p++; */

	printf("%p\n", (void *) p);
	return (0);
}

